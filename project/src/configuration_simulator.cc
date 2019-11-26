// Copyright

#include "src/configuration_simulator.h"
#include "src/bus.h"
#include "src/route.h"

ConfigurationSimulator::ConfigurationSimulator(ConfigManager* configM) {
    // webInterface_ = webI;
    configManager_ = configM;
}

ConfigurationSimulator::~ConfigurationSimulator() {
}

void ConfigurationSimulator::Start(const std::vector<int>& busStartTimings,
    const int& numTimeSteps, std::ostream& o) {
    busStartTimings_ = busStartTimings;
    numTimeSteps_ = numTimeSteps;

    timeSinceLastBus_.resize(busStartTimings_.size());
    for (int i = 0; i < static_cast<int>(timeSinceLastBus_.size()); i++) {
        timeSinceLastBus_[i] = 0;
    }

    simulationTimeElapsed_ = 0;

    prototypeRoutes_ = configManager_->GetRoutes();
    for (int i = 0; i < static_cast<int>(prototypeRoutes_.size()); i++) {
        prototypeRoutes_[i]->Report(o);

        prototypeRoutes_[i]->UpdateRouteData();
        // webInterface_->UpdateRoute(prototypeRoutes_[i]->GetRouteData());
    }
}

void ConfigurationSimulator::Update(std::ostream& o) {
    simulationTimeElapsed_++;

    o << "~~~~~~~~~~ The time is now " << simulationTimeElapsed_;
    o << "~~~~~~~~~~" << std::endl;

    o << "~~~~~~~~~~ Generating new busses if needed ";
    o << "~~~~~~~~~~" << std::endl;

    // Check if we need to generate new busses
    for (int i = 0; i < static_cast<int>(timeSinceLastBus_.size()); i++) {
        // Check if we need to make a new bus
        if (0 >= timeSinceLastBus_[i]) {
            Route * outbound = prototypeRoutes_[2 * i];
            Route * inbound = prototypeRoutes_[2 * i + 1];

            busses_.push_back(new Bus(std::to_string(busId),
                outbound->Clone(), inbound->Clone(), 60, 1));

            busId++;
            timeSinceLastBus_[i] = busStartTimings_[i];
        } else {
            timeSinceLastBus_[i]--;
        }
    }

    o << "~~~~~~~~~ Updating busses ";
    o << "~~~~~~~~~" << std::endl;

    // Update busses
    for (int i = static_cast<int>(busses_.size()) - 1; i >= 0; i--) {
        busses_[i]->Update();

        if (busses_[i]->IsTripComplete()) {
            // webInterface_->UpdateBus(busses_[i]->GetBusData(), true);
            busses_.erase(busses_.begin() + i);
            continue;
        }

        // busses_[i]->UpdateBusData();
        // webInterface_->UpdateBus(busses_[i]->GetBusData());

        busses_[i]->Report(o);
    }

    o << "~~~~~~~~~ Updating routes ";
    o << "~~~~~~~~~" << std::endl;
    // Update routes
    for (int i = 0; i < static_cast<int>(prototypeRoutes_.size()); i++) {
        prototypeRoutes_[i]->Update();

        // prototypeRoutes_[i]->UpdateRouteData();
        // webInterface_->UpdateRoute(prototypeRoutes_[i]->GetRouteData());

        prototypeRoutes_[i]->Report(o);
    }
}
