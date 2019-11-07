/**
 * @file simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_SIMULATOR_H_
#define SRC_SIMULATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <list>
#include <vector>

#include "src/bus.h"
#include "src/stop.h"
#include "src/route.h"
#include "src/passenger_generator.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

/**
 * @brief The main class for the simulator
 *
 * Creates a new instance of a Simulator object.
 *  
 */
class Simulator {
 public:
/**
  * @brief The Start function for Simulator objects.
  * 
  * This pure virtual function is to be used by inheriting classes to start a
  *  simulation of given situations.
  *
  * @return bool = 0, indicates whether simulation successfully starts
  */
  virtual bool Start() = 0;
/**
  * @brief The Update function for Simulator objects.
  * 
  * This pure virtual function is to be used by inheriting classes to update a
  *  simulation.
  *
  * @return bool = 0, indicates whether simulation successfully updates
  */
  virtual bool Update() = 0;

 protected:
  // bus and stop list will be iterated over to update
  // list is efficient in traversal

  std::list<Bus *> active_buses_;         // buses leave scope
  std::list<Stop *> all_stops_;

  // prototype_routes and distance lists will be accessed directly
  // list is not efficient at direct selection by index

  std::vector<Route *> prototype_routes;   // routes for copying on bus creation
  std::vector<double *> distance_between_sets_;
  std::vector<PassengerGenerator *> passenger_generators_;
  // std::vector<std:list<double>> passenger_generation_probability_lists;
};

#endif  // SRC_SIMULATOR_H_
