// Copyright [year] <Copyright Owner>
#include "route.h"

Route::Route(std::string name, Stop ** stops, double * distances,
int num_stops, PassengerGenerator *) {
  for (int i = 0; i < num_stops; i++) {
    stops_.push_back(stops[i]);
  }
  for (int i = 0; i < num_stops - 1; i++) {
    distances_between_.push_back(distances[i]);
  }

  name_ = name;
  num_stops_ = num_stops;
}

void Route::Update() {
  for (std::list<Stop *>::iterator it = stops_.begin();
it != stops_.end(); it++) {
    (*it)->Update();
  }
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
