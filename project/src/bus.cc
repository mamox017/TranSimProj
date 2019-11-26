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
  complete = false;
  hasSwitchedRoutes = false;
  currentStop = outgoing_route_->GetFirstStop();
  distance_remaining_ = currentStop->getDistance();  // or currenStop-distance?
  
  nextStop = GetNextStop();
  currentRoute = outgoing_route_;
  bData->position = outgoing_route_->GetFirstStop()->getPos();
}

void Bus::UpdateBusData() {
  // maybe use previous stop instead of currentStop
  // Stop * followingStop = GetNextStop();

  Position * bPos = new Position();

  // double ratio = distance_remaining_ / length (pythagorean);
  /*
  double x = static_cast<float>((currentStop->getLong()-
    followingStop->getLong())/2.0);
  double y = static_cast<float>((currentStop->getLat()-
    followingStop->getLat())/2.0);

  if (distance_remaining_ <= 0) {
    Position tempPos = followingStop->getPos(); // fix to average
    bPos->x = tempPos.x;
    bPos->y = tempPos.y;
  } else {
    bPos->x = x;
    bPos->y = y;
  } */
  *bPos = currentStop->getPos();  // make average
  //if (distance_remaining_ < 0) {
    //*bPos = followingStop->getPos();
  //}

  bData->id = name_;
  bData->position = *bPos;
  bData->num_passengers = static_cast<int>(GetNumPassengers());
  bData->capacity = GetCapacity();
}

Stop * Bus::GetNextStop() {
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
    if (distance_remaining_ <= 0) {
      // Passengers are taken care of
      UnloadPassengers();
      // land at the stop
      currentStop = currentStop->GetNextStop(); // stop is 16 now
      currentRoute->NextStop();

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
      } else if ((currentRoute->IsAtEnd())) {  // switch route case
        // std::cout << "SWITCHED ROUTES####################" << std::endl;
        // empties all first route passengers
        passengers_.clear();
        // switches routes over
        currentRoute = incoming_route_;
        // sets next stop to first of new route
        currentStop->SetNextStop(incoming_route_->GetFirstStop());
        distance_remaining_ = 0;
        hasSwitchedRoutes = true;
        // UpdateBusData();
      } else {
        distance_remaining_ = currentStop->getDistance();
        currentStop->LoadPassengers(this);
        currentRoute->NextDestinationStop();
        // UpdateBusData();
      }
      return true;
    }
    //UpdateBusData();
    return false;
  }

// Update
void Bus::Update() {  // using common Update format
  // Stops running if trip is complete
  // maybe test to see if removing if statement makes no seg
  if (!IsTripComplete()) {
    if (skipcase == true) {
      complete = true;
    }
    Move();
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

// Returns whether at end of both stops
bool Bus::IsTripComplete() {
  return complete;
}

// Reporter
void Bus::Report(std::ostream& o) {
  o << "Name: " << name_ << std::endl;
  o << "Speed: " << speed_ << std::endl;
  o << "Distance to next stop: " << distance_remaining_ << std::endl;
  // o << "CURRENT STOP: " << currentStop->GetId() << std::endl;
  // o << "NEXT STOP: " << currentStop->GetNextStop()->GetId() << std::endl;
  o << "\tPassengers (" << passengers_.size() << "): " << std::endl;
  for (std::list<Passenger *>::iterator it = passengers_.begin();
it != passengers_.end(); it++) {
    (*it)->Report(o);
  }
}
