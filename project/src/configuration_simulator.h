// Copyright

#ifndef SRC_CONFIGURATION_SIMULATOR_H_
#define SRC_CONFIGURATION_SIMULATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include "src/config_manager.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class Route;
class Bus;
class Stop;
/**
 * @brief The main class for a ConfigurationSimulator..
 *
 * Creates a new instance of a ConfigurationSimulator object.
 *  
 */
class ConfigurationSimulator {
 public:
/**
  * @brief The constructor function of ConfigurationSimulator objects.
  *
  * This creates a ConfigurationSimulator object, no parameters are necessary.
  *
  * param[in] ConfigManager* configmanager object to set up simulation.
  *
  * @return ConfigurationSimulator Object with default attributes
  */
  explicit ConfigurationSimulator(ConfigManager*);
/**
  * @brief The destructor function of ConfigManager objects.
  *
  * This deletes a ConfigManager object.
  *
  * @return none/void
  */
  ~ConfigurationSimulator();
/**
  * @brief The Start function for ConfigurationSimulator objects.
  * 
  * This function starts the simulation of given situations.
  *
  * @param[in] std::vector<int>& bus start timings list of when busses start
  * @param[in] int& length of simulation, number of time steps for simulation
  * @param[in] std::ostream& outputstream of output information
  *
  * @return void
  */
  void Start(const std::vector<int>&, const int&, std::ostream& o =
        std::cout);
/**
  * @brief The Update function for ConfigurationSimulator objects.
  * 
  * This function updates the simulation by updating all the objects inside.
  *
  * @param[in] std::ostream& outputstream of output information
  *
  * @return void
  */
  void Update(std::ostream& o = std::cout);

 private:
  ConfigManager* configManager_;

  std::vector<int> busStartTimings_;
  std::vector<int> timeSinceLastBus_;
  int numTimeSteps_;
  int simulationTimeElapsed_;

  std::vector<Route *> prototypeRoutes_;
  std::vector<Bus *> busses_;

    int busId = 1000;
};

#endif  // SRC_CONFIGURATION_SIMULATOR_H_
