# Project TransitSim: a Proof-of-Concept Transit System Simulator: Iteration 3
This software project is a basic transit simulator of the University of Minnesota - Twin Cities Campus Connector bus routes written in C++.  It is composed of four main classes: Passenger, Bus, Stop, and Route.  There are three classes that help generate passengers: PassengerFactory, PassengerGenerator, and RandomPassengerGenerator.  Two classes also help simulate: LocalSimulator and Simulator.  An additional two simulator classes were added in Iteration 2 to also drive different simulations: ConfigurationSimulator and VisualizationSimulator.  The class, ConfigManager, was also added to help provide functionality to these two simulators.  These simulations can be run in the project directory with:
- vis_sim (output on web): 
    - ./build/bin/vis_sim (port number)
- config_sim (output to file in build/bin directory): 
    - ./build/bin/config_sim (config file) (length of sim) (bus start timings) (output file)

![Picture](https://i.imgur.com/vIx255Z.png)

## Passenger
The Passenger object has a number of traits such as a string name_, int destination_stop_id_, int waited_at_stop_, int time_on_bus_, and int id_.  The name_ and destination_stop_id_ of the passenger are randomly generated, whereas both the wait_at_stop_ and time_on_bus_ are both initially 0.  When a passenger is put on a bus, the time_on_bus_ is incremented from 0 to 1, indicating that the passenger has gotten onto the bus.  The wait_at_stop_ is incremented whenever the passenger is at a stop and Update() is called, time_on_bus_ is also incremented when the passenger is already on a bus.  Other functions are various getter and setter methods.

## Bus
The Bus object travels on routes by having two members as pointers to an incoming route and an outgoing route.  The Move() function moves the bus along by subtracting the bus’s given double speed_ member variable from the bus’s double distance_remaining_ member variable whenever Update() is called.  When the bus is moved, if the distance_remaining_ falls below 0, it determines that it is at a stop and the currentStop member variable, which holds a Stop *, is changed to the next stop.  Therefore, the bus will unload and load passengers accordingly with UnloadPassengers() and LoadPassenger(Passenger *).  UnloadPassengers() works by dropping off Passenger objects with matching destination_stop_id with the id of the Stop object in the currentStop member variable.  LoadPassenger(Passenger *) adds Passenger objects that are at the currentStop to the list.  If the Bus determines it is at the end of a route, it will check if it has switched routes to the outgoing_route_ and will do it if it hasn’t been done.  If it has been done, complete will be marked true in IsTripComplete().  A BusData object *, bData, member variable was added as a holder of information about each Bus object for two of the simulators, ConfigurationSimulator and VisualizationSimulator, to read and use.  Other functions are various getter and setter methods.

## Stop
The Stop object holds a double distance to the next stop, a Stop * nextStop to the following stop, an int id_, a Passenger * passengers_ list, and double longitude & latitude.  When a Bus object arrives at a stop, Bus will call LoadPassengers(Bus *) in the Move() function.  This function iterates through the passengers_ list who are passengers_ at the stop and performs LoadPassenger(Passenger *) on each one to put them onto the bus.  Then it removes the Passenger objects from the Stop passengers_ list.  There are other methods also, such as SetNextStop(Stop * next) which is mainly important when it is used to set the next stop of the last stop in incoming_route_ to the first stop in outgoing_route_ in Move() in Bus.  Other functions are various getter and setter methods.

## Route
The Route object is an aggregation of Stop objects.  It is mainly composed of getters and setters for accessibility of Stop objects for the Bus objects.  The PassengerGenerator * generator_ is used by one of the Generator classes to put Passenger objects at stops on the route.  When Update() is called, all of the Stop objects in the route are iterated through and updated also, also the passengers are generated with GenerateNewPassengers().  The Clone() function is used to create a copy of the Route object for further usage when dealing with simulations.  The IsAtEnd() function checks the current stop of the route with the last stop, if they match, the route is at the end.  A RouteData object *, rData, member variable was added as a holder of information about each Bus object for two of the simulators, ConfigurationSimulator and VisualizationSimulator, to read and use.  Other functions are various getters and setter methods.

## PassengerFactory & PassengerGenerator & RandomPassengerGenerator
These functions drive generation of Passenger objects.  RandomPassengerGenerator inherits PassengerGenerator and has a function GeneratePassengers() that overrides and creates the Passengers with various different names generated from PassengerFactory.

## LocalSimulator & Simulator
These functions drive simulation of the software.  They instantiate objects, and run them through trials.  LocalSimulator inherits Simulator.

## The Data Structs: Position, BusData, StopData, and RouteData
These structs hold information for the two simulators, ConfigurationSimulator and VisualizationSimulator.  They provide data for the simulations to start and update.
- Position: This object holds an x and y positions as members.  This is used by BusData and StopData to hold their latitude and longitudes.
- BusData: This object is usually a member variable of Bus objects and holds the Bus object’s name, position, number of passengers, and capacity.
- StopData: This object holds a Stop object’s name, position and number of people.  This object is usually held within a StopData list for use by RouteData objects.
- RouteData: This object is usually a member variable of Route objects and holds the Route object’s name, as well as a StopData list of the information of each Stop in the Route.

## The Regression Testing classes: myRegressionTestSimulator, and RtestPassengerGenerator
 * These classes drive regression testing.  myRegressionTestSimulator is relatively similar to LocalSimulator, though it has less stops and each stop has a 1.0 generation probability of passenger generation.  RtestPassengerGenerator is very similar to RandomPassengerGenerator, but it only generates one passenger at a time at each time step.  These classes are to be used by a driver named my_regression_driver in the drivers directory by which regression testing can be performed.

## ConfigManager
The ConfigManager class is used to read configurations from text files that are given as input.  The ReadConfig(const std::string filename) function takes in a string of a configuration file name and reads the data within it.  Then it parses the information and creates Stop objects from them with given names/IDs, positions, distances, and generation probabilities.  It adds respective stops to lists and creates a Route object with the parsed Stop lists.  This information is held in the ConfigManager object which is later used by ConfigurationSimulator and VisualizationSimulator.

## ConfigurationSimulator
This simulator class is constructed with a ConfigManager object which holds the Routes for the simulation.  It takes in this information and starts a simulation of a certain length and bus start timings given by arguments to the Start() function and begins a simulation that is output to whatever stream is provided to the Start() function’s third argument.  The Start() function gets the routes from the ConfigManager object member variable and runs Report() on them as well as updating the RouteData objects for each Route object.  Update() increments the time step of the simulation and updates the Bus and Route objects in the simulation. 

## VisualizationSimulator
This simulator works similar to ConfigurationSimulator but also provides the data through a webInterface class to display a web based visualization of the simulation.





---------------------------------------------------------------------------------------------




**NOTE**: Please make sure that **all Tests** pass before pushing any changes. 

### Run Tests:

- cd `tests`
- `make`
- `../build/bin/unittest`

### Style Check:

- `[path_to_cpplint]/cpplint/cpplint-cse.sh --root=[path_target_dir] [file_name]`


### Running the Simulator:

#### Step by step for CSE Labs or vole users

**<port_number> can be anything. Try and pick numbers above 8000 and not multiples of 10.**

1. Navigate to base project directory(project/)  
2. Make and start server:
```
$ cd src
$ make <sim target>
$ cd ..
$./build/bin/<sim executable> <port_number>
```
#### You must run by doing `./build/bin/<sim executable> <port_number>`.
#### You _cannot_ cd to bin/ and run `./<sim executable> <port_number>`
3. Navigate to the following address on your VOLE browser (Firefox/Chrome):
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```
  
#### Step by step for ssh users
You can SSH using a Windows machine with Git Bash.
```
ssh -L <port number>:127.0.0.1:<port_number> <x500>@<cse_labs_computer>.cselabs.umn.edu
```
**<port_number> can be anything. Try and pick numbers above 8000 and not multiples of 10.**

1. Navigate to base project directory(project/)  
2. make and start server:
```
$ cd src
$ make <sim target>
$ cd ..
$./build/bin/<sim executable> <port_number>
```
#### You must run by doing `./build/bin/<sim executable> <port_number>`.
#### You _cannot_ cd to bin/ and run `./<sim executable> <port_number>`
3. Navigate to the following address on your LOCAL machine using your LOCAL browser (Firefox/Chrome):
```
http://127.0.0.1:<port_number>/web_graphics/project.html
```

Note that for lab14, the `sim target` and `sim executable` that you build are both called `vis_sim`. Use `vis_sim` in place of the `<sim target>` and `<sim executable>` arguments above.
