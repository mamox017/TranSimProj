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

Passenger::Passenger(int destination_stop_id, std::string name): name_(name),
        destination_stop_id_(destination_stop_id), wait_at_stop_(0),
        time_on_bus_(0), id_(count_) {
  count_++;
}

void Passenger::Update() {
  if (IsOnBus()) {
    time_on_bus_++;
  } else {
    wait_at_stop_++;
  }
}

void Passenger::GetOffBus() {
  time_on_bus_ = 0;
}

void Passenger::GetOnBus() {
  time_on_bus_ += 1;
}

int Passenger::GetTotalWait() const {
  return (wait_at_stop_ + time_on_bus_);
}

bool Passenger::IsOnBus() const {
  if (time_on_bus_ > 0) {
    return true;
  }
  return false;
}

std::string Passenger::GetName() {
  return name_;
}
int Passenger::GetDestination() const {
  return destination_stop_id_;
}

void Passenger::Report(std::ostream& o) const {
  o << "Name: " << name_ << std::endl;
  o << "Destination: " << destination_stop_id_ << std::endl;
  o << "Total Wait: " << GetTotalWait() << std::endl;
  o << "\tWait at Stop: " << wait_at_stop_ << std::endl;
  o << "\tTime on bus: " << time_on_bus_ << std::endl;
}
