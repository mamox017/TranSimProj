// Copyright

#ifndef SRC_CONFIGURATION_SIMULATOR_H_
#define SRC_CONFIGURATION_SIMULATOR_H_

#include <iostream>
#include <vector>
#include <list>

#include "src/config_manager.h"

class Route;
class Bus;
class Stop;

class ConfigurationSimulator {
 public:
    ConfigurationSimulator(ConfigManager*);
    ~ConfigurationSimulator();

    void Start(const std::vector<int>&, const int&, std::ostream& o =
        std::cout);
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
