/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <iostream>

#include "src/config_manager.h"
#include "src/configuration_simulator.h"
#include <fstream>

int main(int argc, char**argv) {
  // NOTE: this usage will change depending on
  //       how you build your config_sim classes
  //   E.g., how will you handle getting the length of simulation value?
  std::cout << "Usage: ./build/bin/configuration_sim <config_filename>";
  std::cout << std::endl;

  // Check command line params for config file name

  // if filename arg present
  //   Create ConfigManager
  //   Call ReadConfig
  //   Create ConfigurationSimulator
  //   Call Start on ConfigurationSimulator
  //   Start for loop, length of simulation (where from?)
  //     Call Update on ConfigurationSimulator
  // else 
  //   echo info to the user about needing a config file name
  ConfigManager * configManager_ = new ConfigManager();
  if (argc > 1) {
    configManager_->ReadConfig(argv[1]);
    ConfigurationSimulator *configSim = new ConfigurationSimulator(configManager_);

    std::vector<int> timings;
    for(int i = 0; i < 25; i++){ // HOW TO FIND ARGS?
      timings.push_back(5);
    }

    configSim->Start(timings,25);

    // find out how to find length of simulation
    for (int i = 0; i < 25; i++) {
      configSim->Update();
    }
  } else {
    std::cout << "Error: You need to input a config file name" << std::endl;
    return 1;
  }
  return 0;
}
