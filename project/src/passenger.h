
/**
 * @file passenger.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_PASSENGER_H_
#define SRC_PASSENGER_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <iostream>
#include <string>

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

/**
 * @brief The main class for the passenger.
 *
 * Creates a new instance of a Passenger object.
 *  
 */
class Passenger {  // : public Reporter {
 public:
/**
  * @brief Constructs a passenger with a standard name and id.
  *
  *
  * @param[in] int holding an id number
  * @param[in] string holding a name of a created passenger.
  *
  * @return Passenger object with id and name string
  */
  explicit Passenger(int = -1, std::string = "Nobody");
/**
  * @brief The passenger updater function for Passenger objects.
  * 
  * This function updates the passenger by increasing their wait time or
  * time onboard the bus.
  *
  * @return void
  */
  void Update();
/**
  * @brief The passenger get off bus function for Passenger objects.
  * 
  * This function changes the passengers's time_on_bus_ to 0 to indicate that
  * they are no longer on a bus.
  *
  * @return void
  */
  void GetOffBus();
/**
  * @brief The passenger get on bus function for Passenger objects.
  * 
  * This function adds 1 to the passengers's time_on_bus__ to indicate that
  * they are now on a bus.
  *
  * @return void
  */
  void GetOnBus();
/**
  * @brief The passenger get total wait function for Passenger objects.
  * 
  * This function returns the sum of the time_on_bus and wait_at_stop_ to
  * yield the total amount of time the passenger has been waiting.
  *
  * @return int sum of the time_on_bus_ and wait_at_stop_
  */
  int GetTotalWait() const;
/**
  * @brief The passenger is on bus function for Passenger objects.
  * 
  * This function checks if the passenger is on the bus by examining its
  * time_on_bus_.  If it is greater than zero, it is true, the passenger is on 
  * the bus.  Similarly, if 0 or less, the passenger is waiting, false.
  *
  * @return bool indicating whether or not the passenger is on the bus.
  */
  bool IsOnBus() const;
/**
  * @brief The passenger get destination function for Passenger objects.
  * 
  * This function accesses the stop destination of the passenger.
  *
  * @return int id of the destination stop of the passenger.
  */
  int GetDestination() const;
/**
  * @brief The passenger get name function for Passenger objects.
  * 
  * This function accesses the passenger's name for testing purposes.
  *
  * @return std::string name of the passenger.
  */
  std::string GetName();
/**
  * @brief The report function for Passenger objects.
  * 
  * This function reports the passenger's attributes to a given output stream.
  *
  * @param[in] std::ostream& o, the output stream to which the information is
  *  sent.
  *
  * @return void
  */
  void Report(std::ostream&) const;

 private:
  std::string name_;
  int destination_stop_id_;
  int wait_at_stop_;
  int time_on_bus_;
  int id_;
  static int count_;   // global count, used to set ID for new instances
};
#endif  // SRC_PASSENGER_H_
