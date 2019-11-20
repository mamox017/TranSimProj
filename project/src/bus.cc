// Copyright [year] <Copyright Owner>"

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "src/bus.h"

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

// Constructor
Bus::Bus(std::string name, Route * out, Route * in,
int capacity, double speed) {
  // Sets all member variables

  bData = new BusData();
  bData->id = name;
  // add position?
  bData->num_passengers = passengers_.size();
  bData->capacity = capacity;

  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  skipcase = false;
  complete = false;
  hasSwitchedRoutes = false;
  distance_remaining_ = 0;
  currentStop = incoming_route_->GetFirstStop();
  nextStop = GetNextStop();
  currentRoute = incoming_route_;
}

void Bus::UpdateBusData() {
  // maybe use previous stop instead of currentStop
  Stop * followingStop = GetNextStop();

  Position * bPos = new Position();

  //bPos->x = static_cast<float>((currentStop->getLong()+
    //followingStop->getLong())/2.0);
  //bPos->y = static_cast<float>((currentStop->getLat()+
    //followingStop->getLat())/2.0);
  *bPos = currentStop->getPos(); // fix to average

  //if (distance_remaining_ < 0) {
    //*bPos = followingStop->getPos();
  //}

  bData->id = name_;
  bData->position = *bPos;
  bData->num_passengers = static_cast<int>(GetNumPassengers());
  bData->capacity = GetCapacity();
}

Stop * Bus::GetNextStop() {
  if (currentStop != NULL) {
    if (currentStop->GetNextStop() != NULL) {
      nextStop = currentStop->GetNextStop();
      return nextStop;
    }
  }
  return NULL;
}

// Loads passengers onto the bus by pushing them on list
bool Bus::LoadPassenger(Passenger * new_passenger) {
  passengers_.push_back(new_passenger);
  return true;
}

// Unloads the passengers by iterating through them and checking ids
bool Bus::UnloadPassengers() {
  bool success = false;
  std::list<Passenger *>::iterator i = passengers_.begin();
  while (i != passengers_.end()) {
    int pass_id_ = (*i)->GetDestination();
    // If passenger's id matches with the stop, drop it off
    if (pass_id_ == currentStop->GetId()) {
        (*i)->GetOffBus();
        // Removes passenger from the bus passenger list
        passengers_.erase(i++);
    } else {
        ++i;
    }
      success = true;
  }
  // Returns whether or not successful
  return success;
}

// Moves the bus at given speed
bool Bus::Move() {
  // If not at end of outgoing_route
  // hasSwitchedRoutes is false when the bus travels on incoming_route_
  if (!(currentRoute->IsAtEnd() && hasSwitchedRoutes == true)) {
    // Distance is corrected with each time step
    distance_remaining_ = distance_remaining_ - speed_;
    UpdateBusData();
    // If at stop
    if (distance_remaining_ <= 0) {
      // Passengers are taken care of
      UnloadPassengers();
      currentStop->LoadPassengers(this);

      // This case resolves issues at route switching
      // Lower cases take care of setting the next stop
      if (static_cast<int>(distance_remaining_) == 0 || skipcase == true) {
        skipcase = false;
      } else {
        // Sets the next stop as the current stop
        currentStop = currentStop->GetNextStop();
      }

      // Sets the next stop of the route
      currentRoute->NextStop();
      // Case that occurs when incoming_route_ is finished
      if (((currentRoute->IsAtEnd())) && hasSwitchedRoutes == false) {
        // Switches routes over and sets the next stops accordingly
        currentRoute = outgoing_route_;
        currentStop->SetNextStop(currentRoute->GetFirstStop());
        // Sets distance to first distance in the next route
        distance_remaining_ = currentRoute->GetFirstDistance();
        // Sets up the skip case mentioned above and signals it is outgoing now
        hasSwitchedRoutes = true;
        skipcase = true;
      } else if (!(currentRoute->IsAtEnd())) {  // Middle of the route case
        distance_remaining_ = currentRoute->GetNextStopDistance();
      } else {  // Case where at the end of trip
        complete = true;
      }
      return true;
    }
  }
  return false;
}

// Update
void Bus::Update() {  // using common Update format
  // Stops running if trip is complete
  // maybe test to see if removing if statement makes no seg
  if (!IsTripComplete()) {
    Move();
    for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
      (*it)->Update();
    }
  }
}


// Getter of passenger list
std::list<Passenger *> Bus::GetPassengerList() {
  return passengers_;
}

// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

// Returns whether at end of both stops
bool Bus::IsTripComplete() {
  if (incoming_route_->IsAtEnd() && outgoing_route_->IsAtEnd()) {
    complete = true;
  }
  return complete;
}

// Reporter
void Bus::Report(std::ostream& o) {
  o << "Name: " << name_ << std::endl;
  o << "Speed: " << speed_ << std::endl;
  o << "Distance to next stop: " << distance_remaining_ << std::endl;
  o << "\tPassengers (" << passengers_.size() << "): " << std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Report(o);
  }
}
