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
#include "src/data_structs.h"

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
  * loaded.  If the bus is at the end of a trip, it will update the complete
  * member variable to true.
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
  * This function returns the member variable complete which is changed
  * depending on if the bus is at the end of the trip.
  *
  * @return bool object that is true if complete or false if incomplete
  */
  bool IsTripComplete();
/**
  * @brief The passenger list getter function for Bus objects.
  * 
  * This function accesses the private member variable passenger_
  *
  * @return std::list<Passenger *> list of passengers onboard bus
  */
  std::list<Passenger *> GetPassengerList();
/**
  * @brief The bus data updater function for Bus objects.
  * 
  * This function updates all the attributes of the BusData object belonging
  * to this bus.  The position, name_, num_passengers, and capacity are all
  * updated.
  *
  * @return void
  */
  void UpdateBusData();
/**
  * @brief The BusData getter function for Bus objects.
  * 
  * This function accesses the private BusData member variable bData.
  *
  * @return BusData object that holds information about this bus
  */
  BusData GetBusData() {return *bData;}
/**
  * @brief The name getter function for Bus objects.
  * 
  * This function accesses the private member variable name_.
  *
  * @return std::string name_ bus's nickname is returned
  */
  std::string GetName() const {return name_;}
/**
  * @brief The next stop getter function for Bus objects.
  * 
  * This function accesses the private member variable nextStop;
  *
  * @return Stop * next stop object
  */
  Stop * GetNextStop();
/**
  * @brief The num passengers getter function for Bus objects.
  * 
  * This function accesses the size of the private member variable passenger_.
  *
  * @return size_t size of the list of passengers onboard bus
  */
  size_t GetNumPassengers() {return passengers_.size();}
/**
  * @brief The bus capacity getter function for Bus objects.
  * 
  * This function accesses the private member variable
  * passenger_max_capacity_.
  *
  * @return int capacity of the bus
  */
  int GetCapacity() {return passenger_max_capacity_;}
/**
  * @brief The get bus speed function for Bus objects.
  * 
  * This function accesses the private member variable speed_.
  *
  * @return double speed of the bus
  */
  double GetSpeed() {return speed_;}
/**
  * @brief The get incoming route function for Bus objects.
  * 
  * This function accesses the private member variable
  * incoming_route_.
  *
  * @return Route * route object for the incoming route
  */
  Route * GetIn() {return incoming_route_;}
/**
  * @brief The get outgoing route function for Bus objects.
  * 
  * This function accesses the private member variable
  * outgoing_route_.
  *
  * @return Route * route object for the outgoing route
  */
  Route * GetOut() {return outgoing_route_;}
/**
  * @brief The set current stop function for Bus objects.
  * 
  * This function sets the private member variable currentStop.
  *
  * @param[in] Stop * stop, the Stop object which the currentStop will
  * be set to.
  *
  * @return void
  */
  void SetStop(Stop * stop) {currentStop = stop;}
/**
  * @brief The get current stop function for Bus objects.
  * 
  * This function accesses the private member variable currentStop.
  * 
  * @return Stop * current stop of the bus
  */
  Stop * GetStop() {return currentStop;}
/**
  * @brief The get distance remaining function for Bus objects.
  * 
  * This function accesses the private member variable distance_remaining.
  *
  * @return double distance remaining to next stop
  */
  double GetDistRemaining() {return distance_remaining_;}
/**
  * @brief The get current route function for Bus objects.
  * 
  * This function accesses the private member variable currentRoute.
  *
  * @return Route * current route of the bus
  */
  Route * GetCurrRoute() {return currentRoute;}
/**
  * @brief The avg dist calc function for Bus objects.
  * 
  * This function finds the average distance between the latitudes or
  * longitudes of two stops.
  *
  * @param[in]: Stop * followingstop of which to take average from
  * @param[in]: std::string identifier of latitude or longitude
  *
  * @return float average distance between latitudes or longitudes
  */
  float AvgDistCalc(Stop * followStop, std::string lat_or_long);

 private:
  BusData * bData;
  Stop * currentStop;
  Stop * nextStop;
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
