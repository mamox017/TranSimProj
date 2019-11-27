// Copyright [year] <Copyright Owner>

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "src/route.h"
#include <stdlib.h>

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

// Constructor
Route::Route(std::string name, Stop ** stops, double * distances,
int num_stops, PassengerGenerator * gen) {
  // Sets stops and their next stops accordingly
  // Which is technically a linked list of stops
  rData = new RouteData();
  rData->id = name;

  for (int i = 0; i < num_stops; i++) {
    if (i < num_stops) {
      stops[i]->SetNextStop(stops[i+1]);
    }
    stops_.push_back(stops[i]);
  }

  // Makes a list of distances
  // Sets each stop's distance to its respective stop
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
    stops[i]->setDistance(distances[i]);
  }

  generator_ = gen;
  name_ = name;
  num_stops_ = num_stops;

  // Sets the first stop
  currentStop = stops_.front();
  destination_stop_ = currentStop->GetNextStop();
}

// Updates information in RouteData * rData
void Route::UpdateRouteData() {
  // updates name
  rData->id = name_;
  // creates a vector list of StopData objects
  std::vector<StopData> StopDataCollector;

  // iterates through stops on route and makes a StopData object
  // for each Stop
  for (std::list<Stop *>::iterator iter = stops_.begin();
    iter != stops_.end(); iter++) {
    StopData * thisStop = new StopData();
    int tempid = (*iter)->GetId();
    thisStop->id = std::to_string(tempid);
    thisStop->position = (*iter)->getPos();
    thisStop->num_people = (*iter)->GetNumPassengers();

    StopDataCollector.push_back(*thisStop);
  }

  // updates StopData vector list
  rData->stops = StopDataCollector;
}

// Getter for name
std::string Route::GetName() {
  return name_;
}

// Getter for number of stops
int Route::GetNumStops() {
  return num_stops_;
}

// Getter for generator
PassengerGenerator * Route::GetGenerator() {
  return generator_;
}

int Route::getCurrentStop() {
  return currentStop->GetId();
}

// Updater
void Route::Update(std::ostream& o) {
  // Looks through stops and updates them and generates passengers also
  for (std::list<Stop *>::iterator it = stops_.begin();
it != stops_.end(); it++) {
    (*it)->Update();
  }
  GenerateNewPassengers(o);
  // updates the RouteData object
  UpdateRouteData();
}

// Cloner of routes
Route * Route::Clone() {
  // Initialization of Stop **, and double *
  Stop ** newstops = new Stop *[stops_.size()];
  int i = 0;
  double * dists = new double[distances_between_.size()];
  int j = 0;

  // Looks through stops and initializes a new stop for each
  for (std::list<Stop *>::iterator iter = stops_.begin();
  iter != stops_.end(); iter++) {
    newstops[i] = (*iter);
    i++;
  }

  // Puts distances in double * list
  for (std::list<double>::iterator it2 = distances_between_.begin();
it2 != distances_between_.end(); it2++) {
    dists[j] = (*it2);
    j++;
  }

  return new Route(name_, newstops, dists, num_stops_, generator_);
}

// Reporter
void Route::Report(std::ostream& o) {
  o << "Name: " << name_ << std::endl;
  o << "Num stops: " << num_stops_ << std::endl;
  int stop_counter = 0;
  for (std::list<Stop *>::const_iterator it = stops_.begin();
it != stops_.end(); it++) {
    (*it)->Report(o);
    stop_counter++;
  }
}

// Generation, calls generator method
int Route::GenerateNewPassengers(std::ostream& o) {
  int pass = generator_->GeneratePassengers(o);
  return pass;
}

// Getter for total route distance
double Route::GetTotalRouteDistance() const {
  double total = 0;
  // Sums double distance list
  for (std::list<double>::const_iterator it2 = distances_between_.begin();
it2 != distances_between_.end(); it2++) {
    total += (*it2);
  }
  return total;
}

// Getter
double Route::GetNextStopDistance() {
  double d = destination_stop_->getDistance();
  return d;
}

// Getter
Stop * Route::GetLastStop() {
  return stops_.back();
}

// Getter
Stop * Route::GetFirstStop() {
  Stop * first = stops_.front();
  destination_stop_ = first->GetNextStop();
  return stops_.front();
}

// Getter
Stop * Route::GetDestinationStop() const {
  return destination_stop_;
}

// updates current stop to destination
void Route::NextStop() {
  currentStop = destination_stop_;
}

// updates destination_stop_ and increments destination_stop_index
void Route::NextDestinationStop() {
  if (destination_stop_ != NULL) {
    destination_stop_ = destination_stop_->GetNextStop();
    destination_stop_index_++;
  }
}

// Getter
std::list<double> Route::GetDistanceList() {
  return distances_between_;
}

// Getter
double Route::GetFirstDistance() {
  return distances_between_.front();
}

// Checks if current stop matches the last stop
bool Route::IsAtEnd() const {
  if (currentStop == stops_.back()) {
    return true;
  }
  return false;
}

// Checks if argument is same as last stop
bool Route::IsEnd(Stop * stopToCheck) {
  if (stopToCheck == stops_.back()) {
    return true;
  }
  return false;
}
