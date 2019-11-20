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

// Constructor
Stop::Stop(int id, double longitude, double latitude) : id_(id),
longitude_(longitude), latitude_(latitude) {
}

Position Stop::getPos() {
  Position * thisStopPosition = new Position();
  thisStopPosition->x = longitude_;
  thisStopPosition->y = latitude_;
  return *thisStopPosition;
}

// Setter
void Stop::setId(int i) {
  id_ = i;
}

// Setter
void Stop::setLongitude(double l) {
  longitude_ = l;
}

// Setter
void Stop::setLatitude(double lat) {
  latitude_ = lat;
}

// Getter
double Stop::getLong() {
  return longitude_;
}

// Getter
double Stop::getLat() {
  return latitude_;
}

size_t Stop::GetNumPassengers() {
  return passengers_.size();
}

// Loads passengers by iterating through list and putting them on bus
// passenger list, also erases them from stop passenger list
int Stop::LoadPassengers(Bus * bus) {
  int i = 0;
  std::list<Passenger *>::iterator f = passengers_.begin();
  while (f != passengers_.end()) {
    (*f)->GetOnBus();
    bus->LoadPassenger(*f);
    passengers_.erase(f++);
    i++;
  }
  return i;
}

// Adds passengers onto passenger list for stop
int Stop::AddPassengers(Passenger * pass) {
  passengers_.push_back(pass);
  return 0;
}

// Setter
void Stop::setDistance(double dis) {
  distance = dis;
}

// Getter
double Stop::getDistance() {
  return distance;
}

// Updater
void Stop::Update() {
  for (std::list<Passenger *>::iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Update();
  }
}

// Getter
int Stop::GetId() const {
  return id_;
}

// Getter
std::list<Passenger *> Stop::GetPassengerList() {
  return passengers_;
}

// Reporter
void Stop::Report(std::ostream& o) const {
  o << "ID: " << id_ << std::endl;
  o << "Passengers waiting: " << passengers_.size() << std::endl;
  for (std::list<Passenger *>::const_iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Report(o);
  }
}

// Getter
Stop * Stop::GetNextStop() {
  return nextStop;
}
