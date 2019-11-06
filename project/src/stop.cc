/**
 * @file stop.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <iostream>
#include <vector>

#include "src/stop.h"

Stop::Stop(int id, double longitude, double latitude) : id_(id),
longitude_(longitude), latitude_(latitude) {
  // Defaults to Westbound Coffman Union stop
  // no initialization of list of passengers necessary
}

int Stop::AddPassengers(Passenger * pass) {
  passengers_.push_back(pass);
  return 0;
}

void Stop::setDistance(double dis) {
  distance = dis;
}

double Stop::getDistance() {
  return distance;
}

void Stop::Update() {
  for (std::list<Passenger *>::iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Update();
  }
}

int Stop::GetId() const {
  return id_;
}

std::list<Passenger *> Stop::GetPassengerList() {
  return passengers_;
}

void Stop::Report(std::ostream& o) const {
  o << "ID: " << id_ << std::endl;
  o << "Passengers waiting: " << passengers_.size() << std::endl;
  for (std::list<Passenger *>::const_iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Report(o);
  }
}


Stop * Stop::GetNextStop() {
  return nextStop;
}