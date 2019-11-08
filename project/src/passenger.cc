// Copyright 2019 Kevin Wendt

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "src/passenger.h"

#include <iostream>
#include <string>


int Passenger::count_ = 0;

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

// Constructor
Passenger::Passenger(int destination_stop_id, std::string name): name_(name),
        destination_stop_id_(destination_stop_id), wait_at_stop_(0),
        time_on_bus_(0), id_(count_) {
  count_++;
}

// Updater
void Passenger::Update() {
<<<<<<< HEAD
  // Adds 1 to time on bus if on bus or to wait at stop if at stop
  if (IsOnBus()) {
=======
  if (this->IsOnBus()) {
>>>>>>> master
    time_on_bus_++;
  } else {
    wait_at_stop_++;
  }
<<<<<<< HEAD
}

// Changes time on bus to 0, not necessary
void Passenger::GetOffBus() {
  time_on_bus_ = 0;
=======
>>>>>>> master
}

// Adds 1 to passengers time to signify on bus
void Passenger::GetOnBus() {
  time_on_bus_ += 1;
}

// Sum of total wait
int Passenger::GetTotalWait() const {
  return (wait_at_stop_ + time_on_bus_);
}

// If time on bus is greater than 1, passenger is on the bus
bool Passenger::IsOnBus() const {
  if (time_on_bus_ > 0) {
    return true;
  }
  return false;
}

// Getter for name
std::string Passenger::GetName() {
  return name_;
}

// Getter for destination
int Passenger::GetDestination() const {
  return destination_stop_id_;
}

// Reporter
void Passenger::Report(std::ostream& o) const {
  o << "Name: " << name_ << std::endl;
  o << "Destination: " << destination_stop_id_ << std::endl;
  o << "Total Wait: " << GetTotalWait() << std::endl;
  o << "\tWait at Stop: " << wait_at_stop_ << std::endl;
  o << "\tTime on bus: " << time_on_bus_ << std::endl;
}
