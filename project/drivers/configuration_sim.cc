/**
 * @file configuration_sim.cc
 *
 * @copyright 2019 3081 Staff, All rights reserved.
 */
#include <iostream>
#include <fstream>

#include "src/config_manager.h"
#include "src/configuration_simulator.h"

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
    std::cout << "Note: no config file given, config file set to default:"
    " config.txt" << std::endl;
  }
  ConfigurationSimulator *configSim =
  new ConfigurationSimulator(configManager_);

  int lengthofsim = 25;
  if (argc > 2) {
    lengthofsim = std::stoi(argv[2]);
  } else {
    std::cout << "Note: no length of simulation given, sim length set to: 25"
    << std::endl;
  }

  std::ofstream myFilePtr;
  if (argc > 4) {
    std::string outfileName = argv[4];
    myFilePtr.open("build/bin/" + outfileName);
  } else {
    // myFilePtr.open("build/bin/config_sim_output.txt");
    std::cout << "Note: no output file given, output set to: std::cout"
    << std::endl;
  }

  std::vector<int> timings;

  if (argc > 3) {
    int timing = std::stoi(argv[3]);
    if (timing > 10 || timing < 1) {
      std::cout << "ERROR: Please input a timing between 1 and 10" << std::endl;
      return 1;
    }
    timings.push_back(timing);
  } else {
    std::cout << "Note: no time between busses given, busTimings set to: 5"
    << std::endl;
    timings.push_back(5);
  }




  if (invalidName) {
    std::cout << "ERROR: invalid config filename given" << std::endl;
  } else if (myFilePtr.is_open() && argc > 4) {
    myFilePtr << "/*************************" << std::endl << std::endl;
    myFilePtr << "         STARTING" << std::endl;
    myFilePtr << "        SIMULATION" << std::endl;
    myFilePtr << "*************************/" << std::endl;
    // change everything to myFilePtr when fixed
    configSim->Start(timings, lengthofsim, myFilePtr);

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
    std::cout << "SUCCESS: config_sim output successfully written to"
    " file" << std::endl;
  } else if (argc <= 4) {
    std::cout << "/*************************" << std::endl << std::endl;
    std::cout << "         STARTING" << std::endl;
    std::cout << "        SIMULATION" << std::endl;
    std::cout << "*************************/" << std::endl;

    configSim->Start(timings, lengthofsim, std::cout);

    std::cout << "/*************************" << std::endl << std::endl;
    std::cout << "           BEGIN" << std::endl;
    std::cout << "          UPDATING" << std::endl;
    std::cout << "*************************/" << std::endl;

    // find out how to find length of simulation
    for (int i = 0; i < lengthofsim; i++) {
      configSim->Update(std::cout);
    }

    std::cout << "/*************************" << std::endl << std::endl;
    std::cout << "        SIMULATION" << std::endl;
    std::cout << "         COMPLETE" << std::endl;
    std::cout << "*************************/" << std::endl;
  } else {
    std::cout << "ERROR: config_sim failure" << std::endl;
    return 1;
  }
  return 0;
}
