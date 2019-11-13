/**
 * @file random_passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

// fix generatepassengers input documentation
#ifndef SRC_RANDOM_PASSENGER_GENERATOR_H_
#define SRC_RANDOM_PASSENGER_GENERATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <list>
#include <random>
#include <ctime>

#include "src/passenger_generator.h"
#include "src/stop.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class Stop;  // forward declaration
/**
 * @brief The main class for the random passenger generator.
 *
 * Creates a new instance of a RandomPassengerGenerator object.
 *  
 */
class RandomPassengerGenerator : public PassengerGenerator{
 public:
 /**
  * @brief Constructs a random passenger generator with a double list and 
  *  Stop * list.
  *
  * @param[in] std::list<double> holding the probabilities of generation
  * @param[in] std::list<Stop *> holding the stops to generate passengers on
  *
  * @return RandomPassengerGenerator object with double and Stop * list
  */
  RandomPassengerGenerator(std::list<double>, std::list<Stop *>);
 /**
  * @brief The generate passengers function for RandomPassengerGenerator
  *  objects.
  * 
  * This function overrides the base class to generate passengers on the Stop *
  *  list with the probabilities from the double list.
  *
  * @return int number of passengers generated
  */
  int GeneratePassengers(std::ostream &o = std::cout) override;

 private:
  static std:: minstd_rand0 my_rand;
};

#endif  // SRC_RANDOM_PASSENGER_GENERATOR_H_
