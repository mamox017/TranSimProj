// Copyright 2019 mamox017@umn.edu

/* STUDENTS: YOU MUST ADD YOUR PASSENGER UNIT TESTS TO THIS FILE. FORMAT YOUR
 * TESTS TO FIT THE SPECIFICATIONS GIVEN BY THE TESTS PROVIDED IN THIS FILE.
 *
 * Please note, the assessment tests for grading, will use the same include
 * files, class names, and function names for accessing students' code that you
 * find in this file.  So students, if you write your code so that it passes
 * these feedback tests, you can be assured that the auto-grader will at least
 * be able to properly link with your code.
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <gtest/gtest.h>
#include <iostream>
#include <list>
#include "../src/bus.h"
#include "../src/stop.h"
#include "../src/route.h"
#include "../src/random_passenger_generator.h"

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class BusTests : public ::testing::Test {
 protected:
    Bus* bus1;

    virtual void SetUp() {
        Stop ** CC_EB_stops = new Stop *[8];
        Stop ** CC_WB_stops = new Stop *[9];
        std::list<Stop *> CC_EB_stops_list;
        std::list<Stop *> CC_WB_stops_list;

        // CC Eastbound stops

        //   West bank station
        Stop * stop_CC_EB_1 = new Stop(0, 44.972392, -93.243774);
        //   student union station
        Stop * stop_CC_EB_2 = new Stop(1, 44.973580, -93.235071);
        //   Oak St & Washington Ave
        Stop * stop_CC_EB_3 = new Stop(2, 44.975392, -93.226632);
        //   before transit
        Stop * stop_CC_EB_4 = new Stop(3, 44.975837, -93.222174);
        //   tway
        Stop * stop_CC_EB_5 = new Stop(4, 44.980753, -93.180669);
        //   Fairgrounds
        Stop * stop_CC_EB_6 = new Stop(5, 44.983375, -93.178810);
        //   Buford & Gartner
        Stop * stop_CC_EB_7 = new Stop(6, 44.984540, -93.181692);
        //   SPSC
        Stop * stop_CC_EB_8 = new Stop(7, 44.984630, -93.186352);

      // CC Westbound stops
      //   SPSC
        Stop * stop_CC_WB_1 = new Stop(8, 44.984630, -93.186352);
      //   Buford & Gartner
        Stop * stop_CC_WB_2 = new Stop(9, 44.984482, -93.181657);
      //   Fairgrounds
        Stop * stop_CC_WB_3 = new Stop(10, 44.983703, -93.178846);
      //   Tway
        Stop * stop_CC_WB_4 = new Stop(11, 44.980663, -93.180808);
      //   before transit
        Stop * stop_CC_WB_5 = new Stop(12, 44.976397, -93.221801);
      //   Ridder
        Stop * stop_CC_WB_6 = new Stop(13, 44.978058, -93.229176);
      //   Jones-Eddy
        Stop * stop_CC_WB_7 = new Stop(14, 44.978366, -93.236038);
      //   Bruininks
        Stop * stop_CC_WB_8 = new Stop(15, 44.974549, -93.236927);
      //   Blegen
        Stop * stop_CC_WB_9 = new Stop(16, 44.972638, -93.243591);

          CC_EB_stops_list.push_back(stop_CC_EB_1);
          CC_EB_stops[0] = stop_CC_EB_1;
          CC_EB_stops_list.push_back(stop_CC_EB_2);
          CC_EB_stops[1] = stop_CC_EB_2;
          CC_EB_stops_list.push_back(stop_CC_EB_3);
          CC_EB_stops[2] = stop_CC_EB_3;
          CC_EB_stops_list.push_back(stop_CC_EB_4);
          CC_EB_stops[3] = stop_CC_EB_4;
          CC_EB_stops_list.push_back(stop_CC_EB_5);
          CC_EB_stops[4] = stop_CC_EB_5;
          CC_EB_stops_list.push_back(stop_CC_EB_6);
          CC_EB_stops[5] = stop_CC_EB_6;
          CC_EB_stops_list.push_back(stop_CC_EB_7);
          CC_EB_stops[6] = stop_CC_EB_7;
          CC_EB_stops_list.push_back(stop_CC_EB_8);
          CC_EB_stops[7] = stop_CC_EB_8;

          CC_WB_stops_list.push_back(stop_CC_WB_1);
          CC_WB_stops[0] = stop_CC_WB_1;
          CC_WB_stops_list.push_back(stop_CC_WB_2);
          CC_WB_stops[1] = stop_CC_WB_2;
          CC_WB_stops_list.push_back(stop_CC_WB_3);
          CC_WB_stops[2] = stop_CC_WB_3;
          CC_WB_stops_list.push_back(stop_CC_WB_4);
          CC_WB_stops[3] = stop_CC_WB_4;
          CC_WB_stops_list.push_back(stop_CC_WB_5);
          CC_WB_stops[4] = stop_CC_WB_5;
          CC_WB_stops_list.push_back(stop_CC_WB_6);
          CC_WB_stops[5] = stop_CC_WB_6;
          CC_WB_stops_list.push_back(stop_CC_WB_7);
          CC_WB_stops[6] = stop_CC_WB_7;
          CC_WB_stops_list.push_back(stop_CC_WB_8);
          CC_WB_stops[7] = stop_CC_WB_8;
          CC_WB_stops_list.push_back(stop_CC_WB_9);
          CC_WB_stops[8] = stop_CC_WB_9;

          double * CC_EB_distances = new double[7];
          double * CC_WB_distances = new double[8];
          CC_EB_distances[0] = 4;
          CC_EB_distances[1] = 4;
          CC_EB_distances[2] = 2;
          CC_EB_distances[3] = 19;
          CC_EB_distances[4] = 1;
          CC_EB_distances[5] = 1;
          CC_EB_distances[6] = 2;

          CC_WB_distances[0] = 2;
          CC_WB_distances[1] = 1;
          CC_WB_distances[2] = 2;
          CC_WB_distances[3] = 19;
          CC_WB_distances[4] = 3;
          CC_WB_distances[5] = 3;
          CC_WB_distances[6] = 2;
          CC_WB_distances[7] = 3;

          std::list<double> CC_EB_probs;  // realistic .15, .3, .025, .05, .05, 0
          CC_EB_probs.push_back(.15);   // WB
          CC_EB_probs.push_back(.3);    // CMU
          CC_EB_probs.push_back(.025);  // O&W
          CC_EB_probs.push_back(.05);   // Pre-transit
          CC_EB_probs.push_back(.05);   // post-transit
          CC_EB_probs.push_back(.01);   // State fair
          CC_EB_probs.push_back(.01);   // Buford
          CC_EB_probs.push_back(0);     // SPSC - MUST BE 0

          std::list<double> CC_WB_probs;  // realistic .35, .05, .01, .01, .2, 0
          CC_WB_probs.push_back(.35);     // SPSC
          CC_WB_probs.push_back(.05);     // Buford
          CC_WB_probs.push_back(.01);     // State fair
          CC_WB_probs.push_back(.01);     // post-transit
          CC_WB_probs.push_back(.025);    // pre-transit
          CC_WB_probs.push_back(.05);     // Ridder
          CC_WB_probs.push_back(.1);      // Jones-Eddy
          CC_WB_probs.push_back(.3);      // Bruininks
          CC_WB_probs.push_back(0);       // Blegen

          RandomPassengerGenerator * CC_EB_generator
            = new RandomPassengerGenerator(CC_EB_probs, CC_EB_stops_list);
          RandomPassengerGenerator * CC_WB_generator
            = new RandomPassengerGenerator(CC_WB_probs, CC_WB_stops_list);

          Route * CC_EB = new Route("Campus Connector - Eastbound", CC_EB_stops,
                                    CC_EB_distances, 8, CC_EB_generator);
          Route * CC_WB = new Route("Campus Connector - Westbound", CC_WB_stops,
                                    CC_WB_distances, 9, CC_WB_generator);

        bus1 = new Bus("Coolbus", CC_EB, CC_WB, 70, 2.0);
    }

    virtual void TearDown() {
        delete bus1;
    }
};


/*******************************************************************************
 * Test Cases
 ******************************************************************************/

/*
methods to test

constructor
update
report
*/

TEST_F(BusTests, ConstructorTest) {
    EXPECT_EQ(bus1->GetName(), "Coolbus");
    // EXPECT_EQ(bus1->GetOut(), CC_EB);
    // EXPECT_EQ(bus1->GetIn(), CC_WB);
    EXPECT_EQ(bus1->GetCapacity(), 70);
    EXPECT_EQ(bus1->GetSpeed(), 2.0);
}

TEST_F (BusTests, LoadPassengerTest) {
    Passenger* passenger1 = new Passenger(5, "Bro");
    bus1->LoadPassenger(passenger1);

    EXPECT_EQ(bus1->GetPassengerList().back(), passenger1);
    EXPECT_EQ(bus1->GetPassengerList().size(), 1);
}

TEST_F (BusTests, UnloadPassengerTest) {
    Passenger* passenger1 = new Passenger(5, "Bro");
    bus1->LoadPassenger(passenger1);
    EXPECT_EQ(bus1->GetPassengerList().back(), passenger1);
    EXPECT_EQ(bus1->GetPassengerList().size(), 1);

    Stop * stop = new Stop(5, 5.0, 5.0);
    bus1->SetStop(stop);
    bus1->UnloadPassengers();
    EXPECT_EQ(bus1->GetPassengerList().size(), 0);
}

TEST_F (BusTests, MoveTest) {  //Test SWITCHING ROUTES?
    // Tests general movement, if distance remaining is decreasing
    double initialDist = bus1->GetDistRemaining();
    bus1->Move();
    double newDist = bus1->GetDistRemaining();
    EXPECT_GT(initialDist, newDist);

    // Tests stop arrival
    Stop * initialStop = bus1->GetStop();
    for(int i = 0; i < 10; i++){
        bus1->Move();
    }
    Stop * newStop = bus1->GetStop();
    EXPECT_NE(initialStop, newStop);

    /* Seg Faults
    // Tests route switching
    Route * initialRoute = bus1->GetCurrRoute();
    for(int i = 0; i < 50; i++){
        bus1->Move();
    }
    Route * newRoute = bus1->GetCurrRoute();
    EXPECT_NE(initialRoute, newRoute);
    */
}

TEST_F (BusTests, UpdateTest) {
    double initialDist = bus1->GetDistRemaining();
    bus1->Update();
    double newDist = bus1->GetDistRemaining();

    EXPECT_GT(initialDist, newDist);

    // Tests stop arrival
    Stop * initialStop = bus1->GetStop();
    for(int i = 0; i < 10; i++){
        bus1->Update();
    }
    Stop * newStop = bus1->GetStop();
    EXPECT_NE(initialStop, newStop);
}


TEST_F (BusTests, ReportTest) {
    std::ostringstream testString;
    bus1->Report(testString);
    EXPECT_EQ(testString.str(),
    "Name: Coolbus\nSpeed: 2\nDistance to next stop: 4\n\tPassengers (0): \n");
}