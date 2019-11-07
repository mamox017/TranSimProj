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
  // if (((int)passengers_.size()+1) <= passenger_max_capacity_) {
  passengers_.push_back(new_passenger);
  return true;
  // }
  // return false;
}

bool Bus::UnloadPassengers() {
  bool success = false;
  /*for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    if ((*it)->GetDestination() == currentStop->GetId()){
      (*it)->GetOffBus();
      // ?
      passengers_.remove(*it);
      success = true;
    }*/
  std::list<Passenger *>::iterator i = passengers_.begin();
  while (i != passengers_.end()) {
    int pass_id_ = (*i)->GetDestination();
    if (pass_id_ == currentStop->GetId()) {
        (*i)->GetOffBus();
        passengers_.erase(i++);  // alternatively, i = items.erase(i);
    } else {
        ++i;
    }
      success = true;
  }
  return success;
}
// if at end of
//      if (currentRoute->IsAtEnd() && hasSwitchedRoutes == false){


bool Bus::Move() {
  // if not at end of outgoing_route
  if (!(currentRoute->IsAtEnd() && hasSwitchedRoutes == true)) {
    distance_remaining_ = distance_remaining_ - speed_;
    // if at stop
    if (distance_remaining_ <= 0) {
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
        // currentStop->LoadPassengers(this);
      } else {
        complete = true;
      }
      // currentStop->LoadPassengers(this);
      return true;
    }
  }
  return false;
}

void Bus::Update() {  // using common Update format
  if (!IsTripComplete()) {
    bool is_at_stop_ = Move();
    if (is_at_stop_) {
      UnloadPassengers();
      currentStop->LoadPassengers(this);
    }
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
  // change to and
  /*if (incoming_route_->IsAtEnd() && outgoing_route_->IsAtEnd()) {
    return true;
  }
  return false;*/
  return complete;
}

void Bus::Report(std::ostream& o) {
  o << "Name: " << name_ << std::endl;
  o << "Speed: " << speed_ << std::endl;
  // o << "Id next: " << currentRoute->GetDestinationStop()->GetId() << std::endl;
  o << "Distance to next stop: " << distance_remaining_ << std::endl;
  o << "\tPassengers (" << passengers_.size() << "): " << std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Report(o);
  }
}
