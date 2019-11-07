/**
 * @file stop.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_STOP_H_
#define SRC_STOP_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <list>
#include <iostream>

#include "src/bus.h"
#include "src/passenger.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class Bus;
/**
 * @brief The main class for a stop.
 *
 * Creates a new instance of a Stop object.
 *  
 */
class Stop {
 public:
/**
  * @brief Constructs a Stop with an id, longitude and latitude.
  *
  * This function is explicit.
  *
  * @param[in] int holding an id number
  * @param[in] double holding the longitude of the stop
  * @param[in] double holding the latitude of the stop
  *
  * @return Stop object with id, longitude and latitude
  */
  explicit Stop(int, double = 44.973723, double = -93.235365);
/**
  * @brief The stop set id function for Stop objects.
  * 
  * This function changes the stop's id to the argument.
  *
  * @return void
  */
  void setId(int i);
/**
  * @brief The stop set longitude function for Stop objects.
  * 
  * This function changes the stop's longitude.
  *
  * @return void
  */
  void setLongitude(double l);
/**
  * @brief The stop set latitude function for Stop objects.
  * 
  * This function changes the stop's latitude.
  *
  * @return void
  */
  void setLatitude(double lat);
/**
  * @brief The stop get longitude function for Stop objects.
  * 
  * This function accesses the stop's longitude.
  *
  * @return double longitude of the stop
  */
  double getLong();
/**
  * @brief The stop get id function for Stop objects.
  * 
  * This function accesses the stop's latitude.
  *
  * @return double latitude of the stop
  */
  double getLat();
/**
  * @brief The stop get id function for Stop objects.
  * 
  * This function accesses the stop's id.
  *
  * @return int id of the stop
  */
  int GetId() const;
/**
  * @brief The load passengers function for Stop objects.
  * 
  * This function iterates through the passenger_ list of the stop and loads
  *  them onto the bus argument.  Then it iterates through the passenger_ list
  *  to remove them from the stop also.
  *
  * @param[in] Bus * bus pointer of which stop loads passengers to
  *
  * @return int number of passengers loaded
  */
  int LoadPassengers(Bus *);
/**
  * @brief The add passengers function for Stop objects.
  * 
  * @param[in] Passenger * pointer to a passenger to add to stop.  Added to
  *  stop list by .push_back().
  *
  * @return int 0 for success
  */
  int AddPassengers(Passenger *);
/**
  * @brief The set next stop function for Stop objects.
  *
  * This function sets the nextStop member of the stop to the argument.
  * Also increments number of passengers at stop.
  *
  * @param[in] Stop * next stop to which nextStop will be set to
  *
  * @return int id of the stop
  */
  void SetNextStop(Stop * next) {nextStop = next;}
/**
  * @brief The get next stop for Stop objects.
  * 
  * This function accesses the nextStop member variable.
  *
  * @return Stop * object of next stop
  */
  Stop * GetNextStop();
/**
  * @brief The get distance for Stop objects.
  * 
  * This function accesses the distance member variable.
  *
  * @return double distance of next stop
  */
  double getDistance();
/**
  * @brief The set distance for Stop objects.
  * 
  * This function sets the distance member variable.
  *
  * @param[in] double dis, distance of the stop

  * @return void
  */
  void setDistance(double dis);
/**
  * @brief The stop updater function for Stop objects.
  * 
  * This function updates the Stop by updating all the passengers on the stop.
  *
  * @return void
  */
  void Update();
/**
  * @brief The report function for Stop objects.
  * 
  * This function reports the Stop's attributes to a given output stream.
  *
  * @param[in] std::ostream& o, the output stream to which the information is
  *  sent.
  *
  * @return void
  */
  void Report(std::ostream&) const;
/**
  * @brief The get passenger list for Stop objects.
  * 
  * This function accesses the passengers_ list member variable.
  *
  * @return std::list<Passenger *> list of passengers on stop
  */
  std::list<Passenger *> GetPassengerList();

 private:
  Stop * nextStop;
  double distance;
  int id_;
  std::list<Passenger *> passengers_;
  double longitude_;
  double latitude_;
};
#endif  // SRC_STOP_H_
