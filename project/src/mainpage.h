// Copyright [year] <Copyright Owner>

#ifndef SRC_MAINPAGE_H_
#define SRC_MAINPAGE_H_

/*! \mainpage Mootii Mamo, CSCI 3081W, mamox017@umn.edu
 *
 * \section intro_sec Project TransitSim: a Proof-of-Concept Transit System Simulator: Iteration 3
 *
 *
 * <b>Introduction</b>
 * 
 * This software project is a basic transit simulator of the University of Minnesota - Twin Cities Campus Connector bus routes written in C++.  It is composed of four main classes: Passenger, Bus, Stop, and Route.  There are three classes that help generate passengers: PassengerFactory, PassengerGenerator, and RandomPassengerGenerator.  Two classes also help simulate: LocalSimulator and Simulator.  An additional two simulator classes were added in Iteration 2 to also drive different simulations: ConfigurationSimulator and VisualizationSimulator.  The class, ConfigManager, was also added to help provide functionality to these two simulators.  These simulations can be run in the project directory with:
 * - vis_sim (output on web): ./build/bin/vis_sim (port number)
 * - config_sim (output to file in build/bin directory): ./build/bin/config_sim (config file) (length of sim) (bus start timings) (output file)
 *
 * <b>Passenger</b>
 *
 * The Passenger object has a number of traits such as a string name_, int destination_stop_id_, int waited_at_stop_, int time_on_bus_, and int id_.  The name_ and destination_stop_id_ of the passenger are randomly generated, whereas both the wait_at_stop_ and time_on_bus_ are both initially 0.  When a passenger is put on a bus, the time_on_bus_ is incremented from 0 to 1, indicating that the passenger has gotten onto the bus.  The wait_at_stop_ is incremented whenever the passenger is at a stop and Update() is called, time_on_bus_ is also incremented when the passenger is already on a bus.  Other functions are various getter and setter methods.
 *
 * <b>Bus</b>
 *
 * The Bus object travels on routes by having two members as pointers to an incoming route and an outgoing route.  The Move() function moves the bus along by subtracting the bus’s given double speed_ member variable from the bus’s double distance_remaining_ member variable whenever Update() is called.  When the bus is moved, if the distance_remaining_ falls below 0, it determines that it is at a stop and the currentStop member variable, which holds a Stop *, is changed to the next stop.  Therefore, the bus will unload and load passengers accordingly with UnloadPassengers() and LoadPassenger(Passenger *).  UnloadPassengers() works by dropping off Passenger objects with matching destination_stop_id with the id of the Stop object in the currentStop member variable.  LoadPassenger(Passenger *) adds Passenger objects that are at the currentStop to the list.  If the Bus determines it is at the end of a route, it will check if it has switched routes to the outgoing_route_ and will do it if it hasn’t been done.  If it has been done, complete will be marked true in IsTripComplete().  A BusData object *, bData, member variable was added as a holder of information about each Bus object for two of the simulators, ConfigurationSimulator and VisualizationSimulator, to read and use.  Other functions are various getter and setter methods.
 *
 * <b>Stop</b>
 *
 * The Stop object holds a double distance to the next stop, a Stop * nextStop to the following stop, an int id_, a Passenger * passengers_ list, and double longitude & latitude.  When a Bus object arrives at a stop, Bus will call LoadPassengers(Bus *) in the Move() function.  This function iterates through the passengers_ list who are passengers_ at the stop and performs LoadPassenger(Passenger *) on each one to put them onto the bus.  Then it removes the Passenger objects from the Stop passengers_ list.  There are other methods also, such as SetNextStop(Stop * next) which is mainly important when it is used to set the next stop of the last stop in incoming_route_ to the first stop in outgoing_route_ in Move() in Bus.  Other functions are various getter and setter methods.
 *
 * <b>Route</b>
 *
 * The Route object is an aggregation of Stop objects.  It is mainly composed of getters and setters for accessibility of Stop objects for the Bus objects.  The PassengerGenerator * generator_ is used by one of the Generator classes to put Passenger objects at stops on the route.  When Update() is called, all of the Stop objects in the route are iterated through and updated also, also the passengers are generated with GenerateNewPassengers().  The Clone() function is used to create a copy of the Route object for further usage when dealing with simulations.  The IsAtEnd() function checks the current stop of the route with the last stop, if they match, the route is at the end.  A RouteData object *, rData, member variable was added as a holder of information about each Bus object for two of the simulators, ConfigurationSimulator and VisualizationSimulator, to read and use.  Other functions are various getters and setter methods.
 *
 * <b>PassengerFactory & PassengerGenerator & RandomPassengerGenerator</b>
 *
 * These functions drive generation of Passenger objects.  RandomPassengerGenerator inherits PassengerGenerator and has a function GeneratePassengers() that overrides and creates the Passengers with various different names generated from PassengerFactory.
 *
 * <b>LocalSimulator & Simulator</b>
 *
 * These functions drive simulation of the software.  They instantiate objects, and run them through trials.  LocalSimulator inherits Simulator.
 *
 * <b>The Data Structs: Position, BusData, StopData, and RouteData</b>
 *
 * These structs hold information for the two simulators, ConfigurationSimulator and VisualizationSimulator.  They provide data for the simulations to start and update.
 * - Position: This object holds an x and y positions as members.  This is used by BusData and StopData to hold their latitude and longitudes.
 * - BusData: This object is usually a member variable of Bus objects and holds the Bus object’s name, position, number of passengers, and capacity.
 * - StopData: This object holds a Stop object’s name, position and number of people.  This object is usually held within a StopData list for use by RouteData objects.
 * - RouteData: This object is usually a member variable of Route objects and holds the Route object’s name, as well as a StopData list of the information of each Stop in the Route.
 *
 * <b>ConfigManager</b>
 *
 * The ConfigManager class is used to read configurations from text files that are given as input.  The ReadConfig(const std::string filename) function takes in a string of a configuration file name and reads the data within it.  Then it parses the information and creates Stop objects from them with given names/IDs, positions, distances, and generation probabilities.  It adds respective stops to lists and creates a Route object with the parsed Stop lists.  This information is held in the ConfigManager object which is later used by ConfigurationSimulator and VisualizationSimulator.
 * 
 * <b>ConfigurationSimulator</b>
 *
 * This simulator class is constructed with a ConfigManager object which holds the Routes for the simulation.  It takes in this information and starts a simulation of a certain length and bus start timings given by arguments to the Start() function and begins a simulation that is output to whatever stream is provided to the Start() function’s third argument.  The Start() function gets the routes from the ConfigManager object member variable and runs Report() on them as well as updating the RouteData objects for each Route object.  Update() increments the time step of the simulation and updates the Bus and Route objects in the simulation. 
 * 
 * <b>VisualizationSimulator</b>
 *
 * This simulator works similar to ConfigurationSimulator but also provides the data through a webInterface class to display a web based visualization of the simulation.
 * Below is a picture of the simulation output from the driver.
 * \image html vis_sim_picture.png
 *
 * <b>The Regression Testing classes: myRegressionTestSimulator, and RtestPassengerGenerator</b>
 * These classes drive regression testing.  myRegressionTestSimulator is the relatively similar to local simulator, though it has less stops and each stop has a 1.0 generation probability of passenger generation.  RtestPassengerGenerator is very similar to RandomPassengerGenerator, but it only generates one passenger at a time at each time step.  These classes are to be used by a driver named my_regression_driver in the drivers directory by which regression testing can be performed.
 *
 * <b>How it all works together:</b>
 *
 * Below is an image of a UML Diagram
 *
 * \image html Iteration_3_UML_Diagram.png
 *
 * \section user_sec User Guide
 *
 * <b>How to download TransitSim</b>
 *
 * The TransitSim files can be found in the following github repo:
 * - https://github.umn.edu/umn-csci-3081-f19/repo-mamox017
 * 
 * Once on the repo, click on the green “Clone or download” button, and click “Download ZIP” from the options that drop down.
 *
 * \image html download_pic.png
 *
 * Once you have downloaded the .zip file.  Open the folder of the download location, and extract the contents of the .zip file so that the files within it are now accessible.
 *
 * \image html extract_pic.png
 *
 * Once the files are extracted, open the folder and navigate to the project directory to view the files required for TransitSim.
 *
 * \image html proj_files.png
 *
 * <b>Configuring TransitSim</b>
 *
 * The simulations of TransitSim can be configured to run in three different ways via their respective executables: config_sim, vis_sim, and capture_transit_sim. 
 *
 * <b>config_sim and vis_sim:</b>
 *
 * The simulators are automatically configured when the “make” command is run on the terminal from the project directory, like so.
 *
 * \image html project_make.png
 *
 * This creates the executables, config_sim and vis_sim, in the project/build/bin directory.
 *
 * <b>capture_transit_sim:</b>
 *
 * This executable is built from the same project directory, but with a different command.  Enter “make capture_transit_sim” into the terminal, like so.
 *
 * \image html capture_make.png
 *
 * This creates the executable, capture_transit_sim, in the project/build/bin directory.
 *
 * <b>Configuring Tests</b>
 *
 * There also are tests that can be run on TransitSim, which need to be configured also.  The unit tests present are in the project/tests directory, while the regression tests are included in the project/src directory along with a regression test driver in the project/drivers directory.
 *
 * <b>Unit tests:</b>
 *
 * These tests are in the project/tests directory, they need to be compiled by making the tests with the separate makefile stored in project/tests.  Therefore, it is required to navigate to the project/tests directory with “cd tests” in the terminal.
 *
 * \image html cd_tests.png
 *
 * Here we run the “make” command.
 *
 * \image html make_tests.png
 *
 * This creates a unittest executable in the project/build/bin directory.
 *
 * <b>Regression tests:</b>
 *
 * The files required for the regression tests are stored in the project/src directory.  To create the executable for the regression test scenario, navigate to the project/src directory in the terminal with the “cd src” command.
 *
 * \image html cd_src.png
 *
 * Once there, run the command: “make my_regression_test”.
 *
 * \image html make_reg.png
 *
 * This creates the my_regression_test executable in the project/build/bin directory.
 *
 * <b>How to operate TransitSim</b>
 *
 * Once you have completed the steps above, you will now have the required executables for the simulators and tests contained in this project.  This section covers how to run each simulation in detail.
 *
 * <b>vis_sim:</b>
 *
 * The visualization simulator is run through a web browser, but needs to be started through the command line.  In the project directory, run the following command with a port number as an argument, in this case it is 8088.
 *
 * \image html run_vis.png
 *
 * If the output above is displayed, the simulator has been compiled and run correctly.
 * It is available through by typing the following link format into a web browser, with <port_number> substituted for the port number you have entered:
 * - http://127.0.0.1:<port_number>/web_graphics/project.html
 *
 * Since the port number is 8088 in the example above, we would navigate to the link:
 * - http://127.0.0.1:8088/web_graphics/project.html
 *
 * When this page is open, you should see a simulator with dials to change the number of time steps to run and to change the time steps between the initialization busses.  Once you have adjusted the dials to your liking, press the “Start” button to begin the simulation.
 *
 * The simulation should look like this:
 *
 * \image html vis_sim_output.png
 *
 * <b>config_sim:</b>
 *
 * The configuration simulator is run and displayed on the commandline.  Like visualization simulator, it is compiled with the make command in the project directory, the steps for this are detailed above.  However, it is not run in a web browser.  It is run with the command, “./build/bin/config_sim”.
 *
 * \image html config_sim_run.png
 *
 * Alternatively, if you would like to change settings of the simulation, you can include arguments to this command in the format: ./build/bin/config_sim (config_file.txt) (sim_length) (busStartTimings) (output file).  These arguments change the configuration file, simulation length, and bus timings used along with the name of an output file that the information is sent to.
 * Below is an example:
 *
 * \image html config_sim_run_with_args.png
 *
 * The output should look like this, provided that the files are compiled correctly:
 *
 * \image html config_sim_output.png
 *
 * If an output file is given as an argument, the output will look like this and the file will be stored in the project/build/bin directory.
 *
 * \image html config_sim_outputfile.png
 *
 * <b>capture_transit_sim:</b>
 *
 * For this simulator, you have to navigate to the project/build/bin directory and run the command “./capture_transit_sim (output text file)”
 *
 * \image html capture_run.png
 *
 * The output will be stored in a text file that has the same name as the argument, and will be also stored in the project/build/bin directory.
 *
 * <b>Unit Tests:</b>
 *
 * Once you have completed the configuration steps above for the unit tests, you will have a unittest executable in the project/build/bin directory.  Navigate to this directory and run it with the command “./unittest” for the following output.
 *
 * \image html tests_screenshot.png
 *
 * <b>Regression Test:</b>
 *
 * The configuration steps for the regression test yields the executable, “my_regression_test” in the project/build/bin directory.  Navigate to this directory.  A regression test can be performed by running the tests and storing the output into two different files, then comparing the outputs.
 *
 * Below is a sample run of the regression test.
 *
 * \image html regTest_screenshot.png
 *
 * The first and second commands store the regression test output into files named “rtout1” and “rtout2”.
 * The third command compares the two files, if there is no output from this command, the regression test has successfully passed.
 *
 *
 * <b>Thanks for reading!</b>
 */

#endif  // SRC_MAINPAGE_H_
