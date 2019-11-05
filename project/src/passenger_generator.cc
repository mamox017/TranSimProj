/**
 * @file passenger_generator.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#include "src/passenger_generator.h"
#include <stdlib.h>
#include "src/passenger.h"
/*
generate a list of passengers
route->generateNewPass has nested for loop going through each stop and a list of passengers for each stop
*/
PassengerGenerator::PassengerGenerator(std::list<double> probs,
   std::list<Stop *> stops) {
  generation_probabilities_ = probs;
  stops_ = stops;
}

/*std::list<Passenger *> PassengerGenerator::Generate(){
  std::list<Passenger *> generatedPassengers;  
  int how_many_ = rand() % (generation_probabilities.size-1);
  int numpass = generation_probabilities[how_many_];
  
}*/

/*
PassengerGenerator::PassengerGenerator(const PassengerGenerator& p){
  generation_probabilities_ = p.generation_probabilities_;
  stops_ = p.stops_;
}

for (std::list<double>::const_iterator i = generation_probabilities_.begin();
i != generation_probabilities_.end(); i++) {
    p.
  }

PassengerGenerator::=(const PassengerGenerator &p){
  if (generation_probabilities_ != p.generation_probabilities_){

  }
}*/
