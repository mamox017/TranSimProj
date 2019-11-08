/**
 * @file bus.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_BUS_H_
#define SRC_BUS_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <iostream>
#include <list>
#include <string>

#include "src/passenger.h"
#include "src/route.h"
#include "src/stop.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class PassengerUnloader;
class PassengerLoader;
class Route;
class Stop;
/**
 * @brief The main class for the bus.
 *
 * Creates a new instance of a Bus object.
 *  
 */
class Bus {
 public:
/**
  * @brief The constructor function of Bus objects.
  *
  * This creates a bus object with given attributes as arguments.
  *
  * @param[in] std::string name Current stop, name attribute of the Bus object
  * @param[in] Route * out, outgoing route of the bus, used after in
  * @param[in] Route * in, incoming route of the bus, traversed first
  * @param[in] int capacity, maximum number of passengers in passenger_ list
  * @param[in] double speed, number at which distance_remaining_ decreases
  *
  * @return Bus object with name, outgoing route, incoming route, cap, and speed
  */
  Bus(std::string name, Route * out, Route * in, int capacity = 60,
                                                 double speed = 1);
/**
  * @brief The passenger loader function for Bus objects.
  * 
  * This function loads a passenger onto the bus if the capacity isn't reached.
  *
  * @param[in] Passenger * new_passenger, pointer to passenger to be loaded
  *
  * @return Boolean object determining whether or not the load was successful
  */
  bool LoadPassenger(Passenger * new_passenger);
/**
  * @brief The passenger unloader function for Bus objects.
  * 
  * This function unloads a passenger off the bus.
  *
  * @return bool object determining whether or not the unload was successful
  */
  bool UnloadPassengers();
/**
  * @brief The motion function for Bus objects.
  * 
  * This function moves the bus by decreasing the distance_remaining_ by speed.
  * If the distance_remaining_ is less than or equal to 0, progresses to next
  * stop.
  *
  * @return bool object determining whether or not at a stop
  */
  bool Move();
/**
  * @brief The bus updater function for Bus objects.
  * 
  * This function updates the bus's state if the trip is not complete.  If the
  * bus is at a stop, as determined by Move(), passengers will be unloaded and
  * loaded.
  *
  * @return void
  */
  void Update();
/**
  * @brief The report function for Bus objects.
  * 
  * This function reports the bus's attributes to a given output stream.
  *
  * @param[in] std::ostream& o, the output stream to which the information is
  *  sent.
  *
  * @return void
  */
  void Report(std::ostream& o);
/**
  * @brief The trip complete checker function for Bus objects.
  * 
  * This function checks if the bus is at the end of both the incoming and
  * outgoing routes by using IsAtEnd()
  * *[EDIT]* This accessor function retrieves the member variable complete
  *
  * @return bool object that is true if complete or false if incomplete
  */
  bool IsTripComplete();
  /**
  * @brief The bus GetPassengerList function for Bus objects.
  * 
  * This function accesses the private member variable passenger_
  *
  * @return std::list<Passenger *> list of passengers onboard bus
  */
  std::list<Passenger *> GetPassengerList();

 private:
  Stop * currentStop;
  bool skipcase;
  bool hasSwitchedRoutes;
  std::list<Passenger *> passengers_;
  int passenger_max_capacity_;
  std::string name_;
  double speed_;  // could also be called "distance travelled in one time step"
  Route * outgoing_route_;
  Route * incoming_route_;
  Route * currentRoute;
  bool complete;

  double distance_remaining_;  // when negative?, unload/load procedure occurs
                              // AND next stop set
  // double revenue_; // revenue collected from passengers, doesn't include
                      // passengers who pay on deboard
  // double fuel_;   // may not be necessary for our simulation
  // double max_fuel_;
};
#endif  // SRC_BUS_H_
