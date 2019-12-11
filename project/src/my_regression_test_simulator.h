/**
 * @file r_local_simulator.h
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */

#ifndef SRC_MY_REGRESSION_TEST_SIMULATOR_H_
#define SRC_MY_REGRESSION_TEST_SIMULATOR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <vector>
#include <string>
#include "src/simulator.h"


/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

/**
 * @brief The main class for a myRegressionTestSimulator.
 *
 * Creates a new instance of a myRegressionTestSimulator object.
 *  
 */
class myRegressionTestSimulator : public Simulator {
 public:
/**
  * @brief The Start function for myRegressionTestSimulator objects.
  * 
  * This function overrides the base class function to start a
  *  simulation of given situations.
  *
  * @param[in] std::ostream& outputstream of output information
  *
  * @return bool = 0, indicates whether simulation successfully starts
  */
  bool Start(std::ostream &o = std::cout) override;
/**
  * @brief The Update function for myRegressionTestSimulator objects.
  * 
  * This function overrides the base class function to update a
  *  simulation of given situations.
  *
  * @param[in] std::ostream& outputstream of output information
  *
  * @return bool = 0, indicates whether simulation successfully updates
  */
  bool Update(std::ostream &o = std::cout) override;

 private:
  std::vector<int> bus_counters_;
  std::vector<int> bus_start_timings_;
  std::vector<int> time_since_last_bus_generation_;
  int simulation_time_elapsed_;
};

#endif  // SRC_MY_REGRESSION_TEST_SIMULATOR_H_
