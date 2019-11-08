/**
 * @file local_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#ifndef SRC_LOCAL_SIMULATOR_H_
#define SRC_LOCAL_SIMULATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <vector>

#include "src/simulator.h"

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

/**
 * @brief The main class for a localsimulator.
 *
 * Creates a new instance of a localsimulator object.
 *  
 */
class LocalSimulator : public Simulator {
 public:
 /**
  * @brief The Start function for localsimulator objects.
  * 
  * This function overrides the base class function to start a
  *  simulation of given situations.
  *
  * @return bool = 0, indicates whether simulation successfully starts
  */
  bool Start() override;
  /**
  * @brief The Update function for localsimulator objects.
  * 
  * This function overrides the base class function to update a
  *  simulation of given situations.
  *
  * @return bool = 0, indicates whether simulation successfully updates
  */
  bool Update() override;

 private:
  std::vector<int> bus_counters_;
  std::vector<int> bus_start_timings_;
  std::vector<int> time_since_last_bus_generation_;
  int simulation_time_elapsed_;
};

#endif  // SRC_LOCAL_SIMULATOR_H_
