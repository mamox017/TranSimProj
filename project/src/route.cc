// Copyright [year] <Copyright Owner>
#include "src/route.h"
#include <stdlib.h>

Route::Route(std::string name, Stop ** stops, double * distances,
int num_stops, PassengerGenerator * gen) {
  for (int i = 0; i < num_stops; i++) {
    stops_.push_back(stops[i]);
  }
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
  }

  generator_ = gen; // ?
  name_ = name;
  num_stops_ = num_stops;

  stopsArg = stops;
  distancesArg = distances;
}

void Route::Update() {
  for (std::list<Stop *>::iterator it = stops_.begin();
it != stops_.end(); it++) {
    (*it)->Update();
  }
}

Route * Route::Clone() {
  // maybe make distances_between_ a pointer?
  // PassengerGenerator gen2;
  // gen2 = generator_;
  
  return new Route(name_, stopsArg, distancesArg, num_stops_, generator_);
}

void Route::Report(std::ostream& o) {
  o << "Name: " << name_ << std::endl;
  o << "Num stops: " << num_stops_ << std::endl;
  int stop_counter = 0;
  for (std::list<Stop *>::const_iterator it = stops_.begin();
it != stops_.end(); it++) {
    (*it)->Report(o);
    stop_counter++;
  }
}

int GenerateNewPassengers(){
  for (std::list<Stop *>::iterator it = stops_.begin();
it != stops_.end(); it++) {
    (it*)->AddPassengers();
  }
  return 0;
}
