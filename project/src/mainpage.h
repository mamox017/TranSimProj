// Copyright [year] <Copyright Owner>

#ifndef SRC_MAINPAGE_H_
#define SRC_MAINPAGE_H_

/*! \mainpage Mootii Mamo, CSCI 3081W, mamox017@umn.edu
 *
 * \section intro_sec Project TransitSim: a Proof-of-Concept Transit System Simulator: Iteration 1
 *
 *
 * <b>Introduction</b>
 * 
 * This software project is a basic transit simulator of the University of Minnesota - Twin Cities Campus Connector bus routes written in C++.  It is composed of four main classes: Passenger, Bus, Stop, and Route.  There are three classes that help generate passengers: PassengerFactory, PassengerGenerator, and RandomPassengerGenerator.  Two classes also help simulate: LocalSimulator and Simulator.
 *
 * <b>Passenger</b>
 *
 * The Passenger object has a number of traits such as a string name_, int destination_stop_id_, int waited_at_stop_, int time_on_bus_, and int id_.  The name_ and destination_stop_id_ of the passenger are randomly generated, whereas both the wait_at_stop_ and time_on_bus_ are both initially 0.  When a passenger is put on a bus, the time_on_bus_ is incremented from 0 to 1, indicating that the passenger has gotten onto the bus.  The wait_at_stop_ is incremented whenever the passenger is at a stop and Update() is called, time_on_bus_ is also incremented when the passenger is already on a bus.  Other functions are various getter and setter methods.
 *
 * <b>Bus</b>
 *
 * The Bus object travels on routes by having two members as pointers to an incoming route and an outgoing route.  The Move() function moves the bus along by subtracting the bus’s given double speed_ member variable from the bus’s double distance_remaining_ member variable whenever Update() is called.  When the bus is moved, if the distance_remaining_ falls below 0, it determines that it is at a stop and the currentStop member variable, which holds a Stop *, is changed to the next stop.  Therefore, the bus will unload and load passengers accordingly with UnloadPassengers() and LoadPassenger(Passenger *).  UnloadPassengers() works by dropping off Passenger objects with matching destination_stop_id with the id of the Stop object in the currentStop member variable.  LoadPassenger(Passenger *) adds Passenger objects that are at the currentStop to the list.  If the Bus determines it is at the end of a route, it will check if it has switched routes to the outgoing_route_ and will do it if it hasn’t been done.  If it has been done, complete will be marked true in IsTripComplete().  Other functions are various getter and setter methods.
 *
 * <b>Stop</b>
 *
 * The Stop object holds a double distance to the next stop, a Stop * nextStop to the following stop, an int id_, a Passenger * passengers_ list, and double longitude & latitude.  When a Bus object arrives at a stop, Bus will call LoadPassengers(Bus *) in the Move() function.  This function iterates through the passengers_ list who are passengers_ at the stop and performs LoadPassenger(Passenger *) on each one to put them onto the bus.  Then it removes the Passenger objects from the Stop passengers_ list.  There are other methods also, such as SetNextStop(Stop * next) which is mainly important when it is used to set the next stop of the last stop in incoming_route_ to the first stop in outgoing_route_ in Move() in Bus.  Other functions are various getter and setter methods.
 *
 * <b>Route</b>
 *
 * The Route object is an aggregation of Stop objects.  It is mainly composed of getters and setters for accessibility of Stop objects for the Bus objects.  The PassengerGenerator * generator_ is used by one of the Generator classes to put Passenger objects at stops on the route.  When Update() is called, all of the Stop objects in the route are iterated through and updated also, also the passengers are generated with GenerateNewPassengers().  The Clone() function is used to create a copy of the Route object for further usage when dealing with simulations.  The IsAtEnd() function checks the current stop of the route with the last stop, if they match, the route is at the end.  Other functions are various getters and setter methods.
 *
 * <b>PassengerFactory & PassengerGenerator & RandomPassengerGenerator</b>
 *
 * These functions drive generation of Passenger objects.  RandomPassengerGenerator inherits PassengerGenerator and has a function GeneratePassengers() that overrides and creates the Passengers with various different names generated from PassengerFactory.
 *
 * <b>LocalSimulator & Simulator</b>

 * These functions drive simulation of the software.  They instantiate objects, and run them through trials.  LocalSimulator inherits Simulator.
 *
 * <b>How it all works together:</b>
 *
 * Below is an image of a UML Diagram
 *
 * \image html UMLDiagram.png
 *
 * <b>Thanks for reading!</b>
 */

#endif  // SRC_MAINPAGE_H_
