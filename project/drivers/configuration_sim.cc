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

  // can take length of simulation from arg need default value
  // dont cout print to a file
  // ./config_sim config.txt outputfilename lengthofsim
  // needs to be able to run just as ./config_sim with defaults
  // also notify if missing

  bool invalidName = false;
  ConfigManager * configManager_ = new ConfigManager();
  if (argc > 1) {
    std::string fileName = argv[1];
    configManager_->ReadConfig(fileName);
    std::ifstream fileCheck("config/" + fileName);
    if (fileCheck.fail()) {
      invalidName = true;
    }
  } else {
    configManager_->ReadConfig("config.txt");
  }
  ConfigurationSimulator *configSim = new ConfigurationSimulator(configManager_);

  std::ofstream myFilePtr;
  if (argc > 2) {
    std::string outfileName = argv[2];
    myFilePtr.open("build/bin/" + outfileName);
  } else {
    myFilePtr.open("build/bin/config_sim_output.txt");
  }

  int lengthofsim = 25;
  if (argc > 3) {
    lengthofsim = std::stoi(argv[3]);
  }

  std::vector<int> timings;  // maybe arg?
  // for(int i = 0; i < lengthofsim; i++){  // HOW TO FIND ARGS?
  timings.push_back(5);
  //timings.push_back(5);
  // }

  if (invalidName) {
    std::cout << "invalid config filename given" << std::endl;
  } else if (myFilePtr.is_open()) {
    myFilePtr << "/*************************" << std::endl << std::endl;
    myFilePtr << "         STARTING" << std::endl;
    myFilePtr << "        SIMULATION" << std::endl;
    myFilePtr << "*************************/" << std::endl;
    // change everything to myFilePtr when fixed
    configSim->Start(timings,lengthofsim, myFilePtr);

    myFilePtr << "/*************************" << std::endl << std::endl;
    myFilePtr << "           BEGIN" << std::endl;
    myFilePtr << "          UPDATING" << std::endl;
    myFilePtr << "*************************/" << std::endl;

    // find out how to find length of simulation
    for (int i = 0; i < lengthofsim; i++) {
      configSim->Update(myFilePtr);
    }

    myFilePtr << "/*************************" << std::endl << std::endl;
    myFilePtr << "        SIMULATION" << std::endl;
    myFilePtr << "         COMPLETE" << std::endl;
    myFilePtr << "*************************/" << std::endl;

    myFilePtr.close();  // write to this
    std::cout << "Config Sim output successfully written to file" << std::endl;
  }
  return 0;
}
