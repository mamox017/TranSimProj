// Copyright [year] <Copyright Owner>
#include <iostream>
#include <string>

#include "src/passenger.h"
#include "src/stop.h"


int Passenger::count_ = 0;
/*
Passenger::Passenger(Stop * dest = NULL, std::string name = "Nobody") {
  name_ = name;
  destination_stop_id = dest.GetId();
  count_++;
}*/

Passenger::Passenger(int destination_stop_id, std::string name): name_(name),
destination_stop_id_(destination_stop_id), wait_at_stop_(0),
time_on_bus_(0), id_(count_) {
  count_++;
}

void Passenger::Update() {
  if (this->IsOnBus()) {
    time_on_bus_++;
  } else {
    wait_at_stop_++;
  }
}

void Passenger::GetOnBus() {
  time_on_bus_ = 1;
}
// fix
int Passenger::GetTotalWait() const {
  // time_on_bus_ + wait_at_stop_
  // or all stops before added together
  return wait_at_stop_;
}
// fix
bool Passenger::IsOnBus() const {
  // what do i refer to?
  return false;
}

int Passenger::GetDestination() const {
  return destination_stop_id_;
}

void Passenger::Report() const {
  std::cout << "Name: " << name_ << std::endl;
  std::cout << "Destination: " << destination_stop_id_ << std::endl;
  std::cout << "Total Wait: " << GetTotalWait() << std::endl;
  std::cout << "\tWait at Stop: " << wait_at_stop_ << std::endl;
  std::cout << "\tTime on bus: " << time_on_bus_ << std::endl;
}
