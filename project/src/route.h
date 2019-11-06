/**
 * @file route.h
 *
 * @Copyright 2019 3081 Staff, All rights reserved.
 */

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
  //void setCurrentStop();
/**
  * @brief The route updater function for Route objects.
  * 
  * This function updates the Route by updating all the stops on the route and
  *  calling for the generation of passengers.
  *
  * @return void
  */
  void Update();
  void Report(std::ostream&);
  bool IsAtEnd() const;
  void NextStop();  // Change destination_stop_ to next stop
  Stop * GetFirstStop();
  Stop * GetDestinationStop() const;    // Get pointer to next stop
  double GetTotalRouteDistance() const;
  double GetNextStopDistance();
  double GetFirstDistance();
  Stop * SetToNextRouteStop(Stop * otherRouteStop);
  Stop * GetLastStop();
  std::string GetName();
  int GetNumStops();
  void DistanceCombiner(std::list<double> otherList);
  std::list<double> GetDistanceList();

  PassengerGenerator * GetGenerator();

 private:
  int GenerateNewPassengers();       // generates passengers on its route
  PassengerGenerator * generator_;
  std::list<Stop *> stops_;
  std::list<double> distances_between_;  // length = num_stops_ - 1
  std::string name_;
  int num_stops_;
  int distancesIndex;
  std::list<double>::iterator distIterator;

  double * distancesArg;
  int destination_stop_index_;  // always starts at zero, no init needed
  Stop * currentStop;
  Stop * destination_stop_;
  // double trip_time_; // derived data - total distance travelled on route
};
#endif  // SRC_ROUTE_H_

