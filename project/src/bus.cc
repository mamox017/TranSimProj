// Copyright [year] <Copyright Owner>"

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "src/bus.h"
#include <math.h>

/*******************************************************************************
 * Member Functions
 ******************************************************************************/

// Constructor
Bus::Bus(std::string name, Route * out, Route * in,
int capacity, double speed) {
  // Sets all member variables

  bData = new BusData();
  bData->id = name;

  bData->num_passengers = passengers_.size();
  bData->capacity = capacity;

  name_ = name;
  outgoing_route_ = out;
  incoming_route_ = in;
  passenger_max_capacity_ = capacity;
  speed_ = speed;
  skipcase = false;
  skipcase2 = false;
  complete = false;
  firstStop = true;
  hasSwitchedRoutes = false;
  currentStop = outgoing_route_->GetFirstStop();
  distance_remaining_ = currentStop->getDistance();

  nextStop = GetNextStop();
  currentRoute = outgoing_route_;
  bData->position = outgoing_route_->GetFirstStop()->getPos();
}

// BusData updater
void Bus::UpdateBusData() {
  // instantiates position to set and retrieves next stop
  Stop * followingStop = GetNextStop();
  Position * bPos = new Position();

  // if in middle of travel to next stop, go half distance on visual
  if (distance_remaining_ < currentStop->getDistance()) {
    // replace temp with query refactor
    float x = static_cast<float>((currentStop->getLong()+
    followingStop->getLong())/2.0);
    float y = static_cast<float>((currentStop->getLat()+
    followingStop->getLat())/2.0);
    // set position attributes
    bPos->x = x;
    bPos->y = y;
  } else {  // else if landed at a stop, put bus visual on the stop
    *bPos = currentStop->getPos();
  }

  // update BusData object attributes
  bData->id = name_;
  bData->position = *bPos;
  bData->num_passengers = static_cast<int>(GetNumPassengers());
  bData->capacity = GetCapacity();
}

// Refactoring not supposed to be in final submission
// Function not used
// replace temp with query refactor function
float Bus::AvgDistCalc(Stop * followStop, std::string lat_or_lon) {
  // if we want to find avg dist between longitudes
  if  (lat_or_lon.compare("long") == 0) {
    float x = static_cast<float>((currentStop->getLong()+
    followStop->getLong())/2.0);
    return x;
  } else if (lat_or_lon.compare("lat") == 0) {
    // if we want to find avg dist between latitudes
    float y = static_cast<float>((currentStop->getLat()+
    followStop->getLat())/2.0);
    return y;
  } else {
    return 0;
  }
}

// returns next stop of the bus
Stop * Bus::GetNextStop() {
  // if currentStop is not null, then return next Stop
  if (currentStop != NULL) {
    if (currentStop->GetNextStop() != NULL) {
      nextStop = currentStop->GetNextStop();
      return nextStop;
    }
  }
  return NULL;
}

// Loads passengers onto the bus by pushing them on list
bool Bus::LoadPassenger(Passenger * new_passenger) {
  passengers_.push_back(new_passenger);
  return true;
}

// Unloads the passengers by iterating through them and checking ids
bool Bus::UnloadPassengers() {
  bool success = false;
  std::list<Passenger *>::iterator i = passengers_.begin();
  while (i != passengers_.end()) {
    int pass_id_ = (*i)->GetDestination();
    // If passenger's id matches with the stop, drop it off
    if (pass_id_ == currentStop->GetId()) {
        (*i)->GetOffBus();
        // Removes passenger from the bus passenger list
        passengers_.erase(i++);
    } else {
        ++i;
    }
      success = true;
  }
  // Returns whether or not successful
  return success;
}

// Moves the bus at given speed
bool Bus::Move() {
    // Distance is corrected with each time step
    distance_remaining_ = distance_remaining_ - speed_;
    // If at stop
    if (distance_remaining_ <= 0 && firstStop == false) {
      // Passengers are taken care of
      UnloadPassengers();
      // land at the stop
      if (hasSwitchedRoutes == true && skipcase2 == true) {
        currentStop = incoming_route_->GetFirstStop();
      } else {
        currentStop = currentStop->GetNextStop();
        currentRoute->NextStop();
      }

      if (currentRoute->IsAtEnd() && hasSwitchedRoutes == true) {
        passengers_.clear();
        if (complete == true) {
          distance_remaining_ = 0;
        } else {
          distance_remaining_ = currentStop->getDistance();
        }
        skipcase = true;
        // currentRoute->NextDestinationStop();
        // UpdateBusData();
        return true;
      } else if (currentRoute->IsAtEnd()) {  // switch route case
        // empties all first route passengers
        passengers_.clear();
        // switches routes over
        currentRoute = incoming_route_;
        // sets next stop to first of new route
        currentStop->SetNextStop(incoming_route_->GetFirstStop());
        currentStop->setDistance(0);
        distance_remaining_ = 0;
        hasSwitchedRoutes = true;
        skipcase2 = true;
      } else {  // general case, in the middle of a route
        // just updates distance remaining for next stop
        distance_remaining_ = currentStop->getDistance();
        currentStop->LoadPassengers(this);
        currentRoute->NextDestinationStop();
        skipcase2 = false;
      } // returns true if at a new stop, false if not
      return true;
    } else if (firstStop == true) {
      distance_remaining_ = 0;
      firstStop = false;
      return true;
    }
    return false;
  }

// Update
void Bus::Update() {  // using common Update format
  // Stops running if trip is complete
  if (!IsTripComplete()) {
    // Handles a case, waits until at last stop to mark trip complete
    if (skipcase == true) {
      complete = true;
    }
    // Moves the bus and updates the passengers and BusData object
    Move();
    // Calls updater for BusData object
    UpdateBusData();
    for (std::list<Passenger *>::iterator it = passengers_.begin();
    it != passengers_.end(); it++) {
      (*it)->Update();
    }
  }
}


// Getter of passenger list
std::list<Passenger *> Bus::GetPassengerList() {
  return passengers_;
}

// bool Refuel() {
//  // This may become more complex in the future
//  fuel_ = max_fuel_;
// }

// Returns complete member variable, which is changed in Move()
bool Bus::IsTripComplete() {
  return complete;
}

// Reporter
void Bus::Report(std::ostream& o) {
  o << "Name: " << name_ << std::endl;
  o << "Speed: " << speed_ << std::endl;
  o << "Distance to next stop: " << distance_remaining_ << std::endl;
  o << "CURRENT STOP: " << currentStop->GetId() << std::endl;
  o << "NEXT STOP: " << currentStop->GetNextStop()->GetId() << std::endl;
  o << "\tPassengers (" << passengers_.size() << "): " << std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Report(o);
  }
}
