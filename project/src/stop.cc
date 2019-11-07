/**
 * @file stop.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <iostream>
#include <vector>

#include "src/stop.h"

/*******************************************************************************
 * Member Functions
 ******************************************************************************/
Stop::Stop(int id, double longitude, double latitude) : id_(id),
longitude_(longitude), latitude_(latitude) {
  // Defaults to Westbound Coffman Union stop
  // no initialization of list of passengers necessary
  // itera = passengers_.begin();
  num_waiters = 0;
}

void Stop::setId(int i) {
  id_ = i;
};

void Stop::setLongitude(double l) {
  longitude_ = l;
}

void Stop::setLatitude(double lat) {
  latitude_ = lat;
}

double Stop::getLong() {
  return longitude_;
}

double Stop::getLat() {
  return latitude_;
}

int Stop::LoadPassengers(Bus * bus) {
  int i = 0;
  // std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&   " <<
  // static_cast<int>(passengers_.size()) << std::endl;
  // adds to bus
  /*
  std::cout<<passengers_.size()<<std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
  it != passengers_.end(); it++) {
    (*it)->GetOnBus();
    bus->LoadPassenger(*it);
    i++;
  }*/
  // std::list<Passenger *> busList = bus->GetPassengerList();
  std::list<Passenger *>::iterator f = passengers_.begin();
  while (f != passengers_.end()) {
    (*f)->GetOnBus();
    bus->LoadPassenger(*f);
    passengers_.erase(f++);
    //passengers_.erase(f++);
    // busList.push_back(*f);
    i++;
  }

  // removes from stop
  /*std::list<Passenger *>::iterator j = passengers_.begin();
  while (j != passengers_.end()) {
    passengers_.erase(j++);  // alternatively, i = items.erase(i);
  }*/
  return i;
}


int Stop::AddPassengers(Passenger * pass) {
  passengers_.push_back(pass);
  num_waiters++;
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
