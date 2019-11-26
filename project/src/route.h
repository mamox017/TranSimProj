/**
 * @file route.h
 *
 * @Copyright 2019 3081 Staff, All rights reserved.
 */


// document input of ostream to generatenewpassengers & update &
// nextdestinationstop
#ifndef SRC_ROUTE_H_
#define SRC_ROUTE_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <list>
#include <iostream>
#include <string>

#include "./passenger_generator.h"
#include "./stop.h"
#include "src/data_structs.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class PassengerGenerator;
class Stop;
/**
 * @brief The main class for a route.
 *
 * Creates a new instance of a Route object.
 *  
 */
class Route {
 public:
/**
  * @brief Constructs a Route with a name, stop list, distance list, number
  * of stops, and a passenger generator.
  *
  * @param[in] std::string name, label for the route
  * @param[in] Stop ** stops, pointer array of Stop * objects in the route
  * @param[in] double * distances, distances between stops on the route
  * @param[in] int num_stops, the number of stops on the route
  * @param[in] PassengerGenerator * gen, PassengerGenerator object pointer,
  *  which will be used to generate passengers on the route.
  *
  * @return Route object with name, stop list, distance list, number of stops,
  *  and PassengerGenerator
  */
  Route(std::string name, Stop ** stops, double * distances, int num_stops,
        PassengerGenerator * gen);
/**
  * @brief Clones a Route object, giving it the same attributes.  Uses iterator
  *  to create deep copies of stop and double lists, while copying over the
  *  number of stops and name, as well as pointing to the same generator.
  *
  * @return Route * copy of Route object
  */
  Route * Clone();
/**
  * @brief The route updater function for Route objects.
  * 
  * This function updates the Route by updating all the stops on the route and
  *  calling for the generation of passengers.
  *
  * @return void
  */
  void Update(std::ostream &o = std::cout);
/**
  * @brief The report function for Route objects.
  * 
  * This function reports the Route's attributes to a given output stream.
  *
  * @param[in] std::ostream& o, the output stream to which the information is
  *  sent.
  *
  * @return void
  */
  void Report(std::ostream&);
/**
  * @brief end of route checking function for Route objects.
  * 
  * This function checks if the route is at the end by examining whether or not
  *  the currentStop is the same as the back of the stop list.
  *
  * @return bool object that is true if at end and false if not at end of route
  */
  bool IsAtEnd() const;
/**
  * @brief The next stop function for Route objects.
  * 
  * This function changes currentStop to the destination_stop_ and changes the
  *  destination_stop_ to next stop.  Also increments destination_stop_index_.
  *
  * @return void
  */
  void NextStop();  // Change destination_stop_ to next stop
/**
  * @brief The get first stop for Route objects.
  * 
  * This function accesses the first stop on the Route by using .front() on the
  *  stop list.  Also sets destination_stop to second stop.
  *
  * @return Stop * object of first stop on the route
  */
  Stop * GetFirstStop();
/**
  * @brief The get destination stop for Route objects.
  * 
  * This function accesses destination_stop_ member variable.
  *
  * @return Stop * object of next destination stop on the route
  */
  Stop * GetDestinationStop() const;    // Get pointer to next stop
/**
  * @brief The get total route distance for Route objects.
  * 
  * This function iterates through the double list of distances and adds them
  *  to a running sum.
  *
  * @return double sum of all distances on the route
  */
  double GetTotalRouteDistance() const;
/**
  * @brief The get next stop distance for Route objects.
  * 
  * This function uses an accessor on the destination_stop_ to retrieve
  *  its distance away.
  *
  * @return double distance away of next stop
  */
  double GetNextStopDistance();
/**
  * @brief The get first stop distance for Route objects.
  * 
  * This function uses .front() on the list of distances_between_ to get the
  *  first distance away on the Route.
  *
  * @return double distance away of first stop
  */
  double GetFirstDistance();
/**
  * @brief The get last stop for Route objects.
  * 
  * This function uses .back() on the stop list to retrieve the last stop
  *  on the Route
  *
  * @return Stop * last stop on the route
  */
  Stop * GetLastStop();
/**
  * @brief The get name for Route objects.
  * 
  * This accessor retrieves the route name_ for testing purposes.
  *
  * @return std::name name of the route
  */
  std::string GetName();
/**
  * @brief The get num stops for Route objects.
  * 
  * This accessor retrieves the num_stops_ for testing purposes.
  *
  * @return int num_stops_ of the route
  */
  int GetNumStops();
/**
  * @brief The get distances list for Route objects.
  * 
  * This accessor retrieves the route stop distances for testing purposes.
  *
  * @return std::list<double> list of the distances between stops on route
  */
  std::list<double> GetDistanceList();
/**
  * @brief The get generator for Route objects.
  * 
  * This accessor retrieves the PassengerGenerator for testing purposes.
  *
  * @return PassengerGenerator generator of the route
  */
  PassengerGenerator * GetGenerator();

  // WRITE DOCUMENTATION CODE UPDATEROUTEDATA
  void UpdateRouteData();

  std::list<Stop *> GetStops() {return stops_;}

  RouteData GetRouteData() {return *rData;}

  void NextDestinationStop();
  bool IsEnd(Stop * test);
  int getCurrentStop();

 private:
/**
  * @brief The passenger generator for Route objects.
  * 
  * This generates passengers along all the stops on the route
  * by calling the Generate function on the generator
  *
  * @return int number of passengers generated
  */
  int GenerateNewPassengers(std::ostream& o = std::cout);
  RouteData * rData;
  PassengerGenerator * generator_;
  std::list<Stop *> stops_;
  std::list<double> distances_between_;
  std::string name_;
  int num_stops_;

  int destination_stop_index_;  // always starts at zero, no init needed
  Stop * currentStop;
  Stop * destination_stop_;
  // double trip_time_; // derived data - total distance travelled on route
};
#endif  // SRC_ROUTE_H_

