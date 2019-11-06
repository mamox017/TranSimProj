/**
 * @file passenger_generator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_PASSENGER_GENERATOR_H_
#define SRC_PASSENGER_GENERATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "src/passenger_factory.h"
#include <stdlib.h>
#include <list>
#include "src/stop.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
class Stop;  // forward declaration
/**
 * @brief The main class for the passenger generator.
 *
 * Creates a new instance of a PassengerGenerator object.
 *  
 */
class PassengerGenerator {
 public:
/**
  * @brief Constructs a passenger generator with a double list and Stop * list
  *
  *
  * @param[in] std::list<double> holding the probabilities of generation
  * @param[in] std::list<Stop *> holding the stops to generate passengers on
  *
  * @return PassengerGenerator object with double and Stop * list
  */
  PassengerGenerator(std::list<double>, std::list<Stop *>);
  // Makes the class abstract, cannot instantiate and forces subclass override
/**
  * @brief The generate passengers function for PassengerGenerator objects.
  * 
  * This pure virtual function is to be used by inheriting classes to generate
  *  passengers on the Stop * list with the probabilities from the double list.
  *
  * @return int = 0, number of passengers generated
  */
  virtual int GeneratePassengers() = 0;  // pure virtual
  // PassengerGenerator(const PassengerGenerator& p);
  // void operator = (const PassengerGenerator &p);
  // std::list<Passenger *> Generate();
  // (me)Passenger * PassengerListMaker(int numPassengers, Stop * currStop);

 protected:
  std::list<double> generation_probabilities_;
  std::list<Stop *> stops_;

  // should we be using a singleton here somehow?
  PassengerFactory * pass_factory;
};
#endif  // SRC_PASSENGER_GENERATOR_H_
