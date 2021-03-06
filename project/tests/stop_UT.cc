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
#include "../src/stop.h"
#include "../src/passenger.h"
#include "../src/bus.h"
#include "../src/random_passenger_generator.h"
#include "../src/route.h"
#include "../src/data_structs.h"

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class StopTests : public ::testing::Test {
 protected:
    Stop* stop1;
    Route* route1;
    Route* route2;

    Stop ** CC_EB_stops;
    Stop ** CC_WB_stops;

    double * CC_EB_distances;
    double * CC_WB_distances;

    RandomPassengerGenerator * CC_EB_generator;
    RandomPassengerGenerator * CC_WB_generator;

    virtual void SetUp() {
        CC_EB_stops = new Stop *[8];
        CC_WB_stops = new Stop *[9];
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

          CC_EB_distances = new double[7];
           CC_WB_distances = new double[8];
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

          std::list<double> CC_EB_probs;
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

          CC_EB_generator
            = new RandomPassengerGenerator(CC_EB_probs, CC_EB_stops_list);
          CC_WB_generator
            = new RandomPassengerGenerator(CC_WB_probs, CC_WB_stops_list);

          route1 = new Route("Campus Connector - Eastbound", CC_EB_stops,
                                    CC_EB_distances, 8, CC_EB_generator);
          route2 = new Route("Campus Connector - Westbound", CC_WB_stops,
                                    CC_WB_distances, 9, CC_WB_generator);

        stop1 = new Stop(5, 5.0, 5.0);
    }

    virtual void TearDown() {
        delete stop1;
    }
};


/*******************************************************************************
 * Test Cases
 ******************************************************************************/

/*
methods to test

constructor
update
addPassengers
LoadPassengers
getters/setters
getposition
report
*/

TEST_F(StopTests, ConstructorTest) {
    Stop* stop2 = new Stop(6, 6.3, 9.8);
    EXPECT_EQ(stop2->GetId(), 6);
    EXPECT_EQ(stop2->getLong(), 6.3);
    EXPECT_EQ(stop2->getLat(), 9.8);
    // test expected to fail?
    EXPECT_NE(stop2->GetId(), 0);
}

TEST_F(StopTests, GetterSetterTest) {
    Stop * next = new Stop(10, 3.8, 19.5);
    stop1->SetNextStop(next);
    stop1->setId(17);
    stop1->setLongitude(25.8);
    stop1->setLatitude(29.3);
    stop1->setDistance(5.5);

    EXPECT_EQ(stop1->GetId(), 17);
    EXPECT_EQ(stop1->getLong(), 25.8);
    EXPECT_EQ(stop1->getLat(), 29.3);
    EXPECT_EQ(stop1->GetNextStop()->GetId(), 10);
    EXPECT_EQ(stop1->getDistance(), 5.5);
}

TEST_F(StopTests, LoadPassengersTest) {
    Bus * bus = new Bus("newbus", route1, route2);
    stop1->AddPassengers(new Passenger(15, "Dad"));
    bus->SetStop(stop1);
    stop1->LoadPassengers(bus);

    EXPECT_EQ(bus->GetPassengerList().front()->GetName(), "Dad");
}

TEST_F(StopTests, AddPassengersTest) {
    stop1->AddPassengers(new Passenger(15, "Dad"));
    EXPECT_EQ(stop1->GetPassengerList().front()->GetName(), "Dad");
    EXPECT_EQ(stop1->GetPassengerList().front()->GetDestination(), 15);
}

TEST_F(StopTests, GetPositionTest) {
    Position * expected = new Position(5.0, 5.0);
    Position actual = stop1->getPos();
    EXPECT_EQ((*expected).x, actual.x);
    EXPECT_EQ((*expected).y, actual.y);
}

TEST_F(StopTests, UpdateTest) {
    stop1->AddPassengers(new Passenger(10, "Bro"));
    stop1->Update();
    EXPECT_GT(stop1->GetPassengerList().front()->GetTotalWait(), 0);
}

TEST_F(StopTests, ReportTest) {
    std::ostringstream testString;
    stop1->Report(testString);
    EXPECT_EQ(testString.str(), "ID: 5\nPassengers waiting: 0\n");
}
