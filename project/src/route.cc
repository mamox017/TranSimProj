// Copyright [year] <Copyright Owner>

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/route.h"
#include <stdlib.h>

/*******************************************************************************
 * Member Functions
 ******************************************************************************/
// for testing
std::string Route::GetName() {
  return name_;
}

int Route::GetNumStops() {
  return num_stops_;
}

PassengerGenerator * Route::GetGenerator() {
  return generator_;
}


Route::Route(std::string name, Stop ** stops, double * distances,
int num_stops, PassengerGenerator * gen) {
  for (int i = 0; i < num_stops; i++) {
    if (i < num_stops) {
      stops[i]->SetNextStop(stops[i+1]);
    }
    stops_.push_back(stops[i]);
  }
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
    stops[i]->setDistance(distances[i]);
  }
  generator_ = gen;
  name_ = name;
  num_stops_ = num_stops;

  currentStop = stops_.front();
  distancesArg = distances;
}

void Route::Update() {
  for (std::list<Stop *>::iterator it = stops_.begin();
it != stops_.end(); it++) {
    (*it)->Update();
    GenerateNewPassengers();
  }
}

Route * Route::Clone() {
  // maybe make distances_between_ a pointer?
  // PassengerGenerator gen2;
  // gen2 = generator_;

  Stop ** newstops = new Stop *[stops_.size()];
  int i = 0;

  for (std::list<Stop *>::iterator iter = stops_.begin();
iter != stops_.end(); iter++) {
    newstops[i] = (*iter);
    i++;
  }

  double * dists = new double[distances_between_.size()];
  int j = 0;

  for (std::list<double>::iterator it2 = distances_between_.begin();
it2 != distances_between_.end(); it2++) {
    dists[j] = (*it2);
    j++;
  }

  return new Route(name_, newstops, dists, num_stops_, generator_);
  // Route a = new Route(*this);
  // return a;
}

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

int Route::GenerateNewPassengers() {
  // iterate through stops and generate passengers?
  /*
  for (std::list<Stop *>::iterator it = stops_.begin();
  it != stops_.end(); it++) {
    int numPass = generator_->GeneratePassengers();
    Passenger * pass_list_ = generator_->PassengerListMaker(numPass, (it*));
    for (int x = 0; i < numPass; i++;) {
      (it*)->AddPassengers(pass_list);
    }
  }*/
  int pass = generator_->GeneratePassengers();
  return pass;
}


double Route::GetTotalRouteDistance() const {
  double total = 0;
  for (std::list<double>::const_iterator it2 = distances_between_.begin();
it2 != distances_between_.end(); it2++) {
    total += (*it2);
  }
  return total;
}

double Route::GetNextStopDistance() {
  // std::list<double>::const_iterator it2 = distances_between_.begin();
  // advance(it2, 1);
  // return (*it2);
  double d = destination_stop_->getDistance();
  return d;
}

Stop * Route::GetLastStop() {
  return stops_.back();
}

/*
Stop * Route::SetToNextRouteStop(Stop * otherRouteStop) {
  currentStop = destination_stop_;
  destination_stop_ = otherRouteStop;
  destination_stop_index_ = 0;
  return destination_stop_;
}*/


Stop * Route::GetFirstStop() {
  Stop * first = stops_.front();
  destination_stop_ = first->GetNextStop();
  return stops_.front();
}

Stop * Route::GetDestinationStop() const {
  return destination_stop_;
}

void Route::NextStop() {
  /*if (destination_stop_->GetNextStop() != NULL && destination_stop_index_ > (int)stops_.size()-1){
    }*/
  currentStop = destination_stop_;
  destination_stop_ = destination_stop_->GetNextStop();
  destination_stop_index_++;
}

std::list<double> Route::GetDistanceList() {
  return distances_between_;
}

double Route::GetFirstDistance() {
  return distances_between_.front();
}

/*
void Route::DistanceCombiner(std::list<double> otherList) {
  std::list<double> combinedList;
  for (std::list<double>::const_iterator it = distances_between_.begin();
  it != distances_between_.end(); it++) {
    combinedList.push_back(*it);
  }
  for (std::list<double>::const_iterator it2 = otherList.begin();
  it2 != otherList.end(); it2++) {
    combinedList.push_back(*it2);
  }
  distances_between_ = combinedList;
}*/

bool Route::IsAtEnd() const {
  if (currentStop == stops_.back()) {
    return true;
  }
  return false;
}
