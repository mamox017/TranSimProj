// Copyright

#ifndef SRC_DATA_STRUCTS_H_
#define SRC_DATA_STRUCTS_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <string>
#include <vector>

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

/**
 * @brief The struct of a Position object.
 *
 * Creates a new instance of a Position object.
 *  
 */
struct Position {
/**
  * @brief The constructor function of Position objects.
  *
  * This creates a Position object, with default values of 0 for float x, y
  *
  * @return Position object with default values
  */
    Position() : x(0), y(0) {}
/**
  * @brief The constructor function of Position objects.
  *
  * This creates a Position object with given values
  *
  * @param[in] float x_, x position
  * @param[in] float y_, y position
  *
  *
  * @return Position object with given values
  */
    Position(float x_, float y_) {
        x = x_;
        y = y_;
    }
    float x;
    float y;
};

/**
 * @brief The struct of a BusData object.
 *
 * Creates a new instance of a BusData object.
 *  
 */
struct BusData {
/**
  * @brief The constructor function of BusData objects.
  *
  * This creates a BusData object with given values
  *
  * @param[in] std::string id, name of Bus object
  * @param[in] Position object, position of the Bus object
  * @param[in] int num_passengers, number of passengers on Bus object
  * @param[in] int capacity, capacity of Bus object
  *
  * @return BusData object with given values
  */
    BusData() : id(""), position(Position()), num_passengers(0), capacity(0) {}
    std::string id;  // some unique identifier for the bus
    Position position;  // long lat position of bus
    int num_passengers;
    int capacity;
};

/**
 * @brief The struct of a StopData object.
 *
 * Creates a new instance of a StopData object.
 *  
 */
struct StopData {
/**
  * @brief The constructor function of StopData objects.
  *
  * This creates a StopData object with given values
  *
  * @param[in] std::string id, name of Stop object
  * @param[in] Position object, position of the Stop object
  * @param[in] int num_people, number of passengers on Stop object
  *
  * @return StopData object with given values
  */
    StopData() : id(""), position(Position()), num_people(0) {}
    std::string id;  // some unique identifier for the stop
    Position position;  // long lat position of bus
    int num_people;
};

/**
 * @brief The struct of a RouteData object.
 *
 * Creates a new instance of a RouteData object.
 *  
 */
struct RouteData {
/**
  * @brief The constructor function of RouteData objects.
  *
  * This creates a RouteData object with given values
  *
  * @param[in] std::string id, name of Stop object
  * @param[in] std::vector<StopData> list of StopData objects
  *
  * @return RouteData object with given values
  */
    RouteData() : id(""), stops(std::vector<StopData>(0)) {}
    std::string id;  // some unique identifier for the route
    std::vector<StopData> stops;
};

#endif  // SRC_DATA_STRUCTS_H_
