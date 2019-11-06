// Copyright [year] <Copyright Owner>"
#include "src/bus.h"

Bus::Bus(std::string name, Route * out, Route * in,
int capacity, double speed) {
  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  skipcase = false;
  hasSwitchedRoutes = false;
  //firstIter = false;
  distance_remaining_ = 0;
  currentStop = incoming_route_->GetFirstStop();
  currentRoute = incoming_route_;
}

bool Bus::LoadPassenger(Passenger * new_passenger) {
  if (((int)passengers_.size()+1) <= passenger_max_capacity_) {
    passengers_.push_back(new_passenger);
    return true;
  }
  return false;
}

bool Bus::UnloadPassengers() {
  for (std::list<Passenger *>::const_iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    if ((*it)->GetDestination() == currentStop->GetId()){
      (*it)->GetOffBus();
      // ?
      passengers_.erase(it);
    }
    return true;
  }
  return false;
}

bool Bus::Move() {
  distance_remaining_ = distance_remaining_ - speed_;
  if (distance_remaining_ <= 0) {
    if(!IsTripComplete()){
      if ((int)distance_remaining_ == 0 || skipcase == true){
        skipcase = false;
      } else {
        currentStop = currentStop->GetNextStop();
      }
      //std::cout << "                                                                 DESTINATION: " << currentStop->GetId() << std::endl;
      currentRoute->NextStop();
      //switching routes case
      if ((currentRoute->IsAtEnd()) && hasSwitchedRoutes == false){
        currentRoute = outgoing_route_;
        hasSwitchedRoutes = true;
        currentStop->SetNextStop(currentRoute->GetFirstStop());
        distance_remaining_ = currentRoute->GetFirstDistance();
        skipcase = true;
      } else {
        if (!(currentRoute->IsAtEnd())) {
          distance_remaining_ = currentRoute->GetNextStopDistance();
        }
      }
    }
    return true;
  }
  return false;
}

std::list<Passenger *> Bus::GetPassengerList() {
  return passengers_;
}
// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }


void Bus::Update() {  // using common Update format
  if(!IsTripComplete()){
    if (Move()){
      this->UnloadPassengers();
      /*
      std::list<Passenger *> stopPassengerList = currentStop->GetPassengerList();
      for (std::list<Passenger *>::const_iterator it = stopPassengerList.begin();
      it != stopPassengerList.end(); it++) {
        //maybecheck ids
        this->LoadPassenger(*it);
        (*it)->GetOnBus();
      }*/
      currentStop->LoadPassengers(this);
    }

    /*
    for (std::list<Passenger *>::iterator it2 = passengers_.begin();
      it2 != passengers_.end(); it2++) {
        (*it2)->Update();
    }*/
  }
}

bool Bus::IsTripComplete() {
  //change to and
  if (incoming_route_->IsAtEnd() && outgoing_route_->IsAtEnd()) {
    return true;
  }
  return false;
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
