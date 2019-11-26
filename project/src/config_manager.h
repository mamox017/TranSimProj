// Copyright

#ifndef SRC_CONFIG_MANAGER_H_
#define SRC_CONFIG_MANAGER_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <vector>
#include <string>

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/

class Route;
/**
 * @brief The main class for a ConfigManager.
 *
 * Creates a new instance of a ConfigManager object.
 *  
 */
class ConfigManager {
 public:
/**
  * @brief The constructor function of ConfigManager objects.
  *
  * This creates a ConfigManager object, no parameters are necessary.
  *
  * @return ConfigManager Object with default attributes
  */
  ConfigManager();
 /**
  * @brief The destructor function of ConfigManager objects.
  *
  * This deletes a ConfigManager object.
  *
  * @return none/void
  */
  ~ConfigManager();
/**
  * @brief The config reader function of ConfigManager objects.
  *
  * This reads a given route configuration from a text file.
  *
  * @param[in] std::string filename, name of config file
  *
  * @return void
  */
  void ReadConfig(const std::string filename);
/**
  * @brief The get routes function of ConfigManager objects.
  *
  * This function accesses the private member variable routes.
  *
  * @return std::vector<Route *> list of routes from input file
  */
  std::vector<Route *> GetRoutes() const { return routes; }

 private:
  std::vector<Route *> routes;
};

#endif  // SRC_CONFIG_MANAGER_H_
