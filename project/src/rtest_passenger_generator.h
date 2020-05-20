/**
 * @file rtest_passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_RTEST_PASSENGER_GENERATOR_H_
#define SRC_RTEST_PASSENGER_GENERATOR_H_

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
 * @brief The main class for the test random passenger generator.
 *
 * Creates a new instance of a RtestPassengerGenerator object.
 *  
 */
class RtestPassengerGenerator : public PassengerGenerator{
 public:
/**
  * @brief Constructs a rtest passenger generator with a double list and 
  *  Stop * list.
  *
  * @param[in] std::list<double> holding the probabilities of generation
  * @param[in] std::list<Stop *> holding the stops to generate passengers on
  *
  * @return RtestPassengerGenerator object with double and Stop * list
  */
  RtestPassengerGenerator(std::list<double>, std::list<Stop *>);
/**
  * @brief The generate passengers function for RandomPassengerGenerator
  *  objects.
  * 
  * This function overrides the base class to generate passengers on the Stop *
  *  list with the probabilities from the double list.
  *
  * @param[in] std::ostream &o, outputstream of where to output information
  *
  * @return int number of passengers generated
  */
  int GeneratePassengers(std::ostream &o = std::cout) override;

 private:
  static std:: minstd_rand0 my_rand;
};

#endif  // SRC_RTEST_PASSENGER_GENERATOR_H_
