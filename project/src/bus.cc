// Copyright [year] <Copyright Owner>"

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "src/bus.h"

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

Bus::Bus(std::string name, Route * out, Route * in,
int capacity, double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  skipcase = false;
  complete = false;
  hasSwitchedRoutes = false;
  // firstIter = false;
  distance_remaining_ = 0;
  currentStop = incoming_route_->GetFirstStop();
  currentRoute = incoming_route_;
}

bool Bus::LoadPassenger(Passenger * new_passenger) {
  passengers_.push_back(new_passenger);
  return true;
}

bool Bus::UnloadPassengers() {
  bool success = false;
  std::list<Passenger *>::iterator i = passengers_.begin();
  while (i != passengers_.end()) {
    int pass_id_ = (*i)->GetDestination();
    if (pass_id_ == currentStop->GetId()) {
        (*i)->GetOffBus();
        passengers_.erase(i++);
    } else {
        ++i;
    }
      success = true;
  }
  return success;
}


bool Bus::Move() {
  // if not at end of outgoing_route
  if (!(currentRoute->IsAtEnd() && hasSwitchedRoutes == true)) {
    distance_remaining_ = distance_remaining_ - speed_;
    // if at stop
    if (distance_remaining_ <= 0) {
      UnloadPassengers();
      currentStop->LoadPassengers(this);
      // normal case, in middle of route
      // land at stop
      if (static_cast<int>(distance_remaining_) == 0 || skipcase == true) {
        skipcase = false;
      } else {
        currentStop = currentStop->GetNextStop();
      }
      // route lands at stop also
      currentRoute->NextStop();
      // set new distance
      // if the landed at stop is the end then set next stop to first of out
      if (((currentRoute->IsAtEnd())) && hasSwitchedRoutes == false) {
        currentRoute = outgoing_route_;
        currentStop->SetNextStop(currentRoute->GetFirstStop());
        distance_remaining_ = currentRoute->GetFirstDistance();
        hasSwitchedRoutes = true;
        skipcase = true;
      } else if (!(currentRoute->IsAtEnd())) {  // landed at stop has a next
        distance_remaining_ = currentRoute->GetNextStopDistance();
      } else {
        complete = true;
      }
      return true;
    }
  }
  return false;
}

void Bus::Update() {  // using common Update format
  if (!IsTripComplete()) {
    Move();
    for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
      (*it)->Update();
    }
  }
}



std::list<Passenger *> Bus::GetPassengerList() {
  return passengers_;
}
// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }


bool Bus::IsTripComplete() {
  return complete;
}

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
