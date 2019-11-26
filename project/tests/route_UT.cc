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
#include "../src/route.h"
#include "../src/stop.h"
#include "../src/random_passenger_generator.h"

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class RouteTests : public ::testing::Test {
 protected:
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
          CC_WB_probs.push_back(.9999);     // SPSC
          CC_WB_probs.push_back(0.0);     // Buford
          CC_WB_probs.push_back(0.0);     // State fair
          CC_WB_probs.push_back(0.0);     // post-transit
          CC_WB_probs.push_back(0.0);    // pre-transit
          CC_WB_probs.push_back(0.0);     // Ridder
          CC_WB_probs.push_back(0.0);      // Jones-Eddy
          CC_WB_probs.push_back(0);      // Bruininks
          CC_WB_probs.push_back(0);       // Blegen

          CC_EB_generator
            = new RandomPassengerGenerator(CC_EB_probs, CC_EB_stops_list);
          CC_WB_generator
            = new RandomPassengerGenerator(CC_WB_probs, CC_WB_stops_list);

          route1 = new Route("Campus Connector - Eastbound", CC_EB_stops,
                                    CC_EB_distances, 8, CC_EB_generator);
          route2 = new Route("Campus Connector - Westbound", CC_WB_stops,
                                    CC_WB_distances, 9, CC_WB_generator);
    }

    virtual void TearDown() {
        delete route1;
        delete route2;
    }
};


/*******************************************************************************
 * Test Cases
 ******************************************************************************/

/*
methods to test

constructor
update
updateroutedata
report
isatend
clone
*/

TEST_F(RouteTests, ConstructorTest) {
    EXPECT_EQ(route1->GetName(), "Campus Connector - Eastbound");
    // EXPECT_EQ(route1->GetStops(), CC_EB_stops);
    std::list<Stop *> stopList = route1->GetStops();
    int stopIndex = 0;
    for (std::list<Stop *>::iterator it = stopList.begin(); it !=
      stopList.end(); it++) {
      EXPECT_EQ((*it), CC_EB_stops[stopIndex]);
      stopIndex++;
    }
    EXPECT_EQ(route1->GetNumStops(), 8);

    std::list<double> distList = route1->GetDistanceList();
    int distIndex = 0;
    for (std::list<double>::iterator it2 = distList.begin(); it2 !=
      distList.end(); it2++) {
      EXPECT_EQ((*it2), CC_EB_distances[distIndex]);
      distIndex++;
    }

    EXPECT_EQ(route1->GetGenerator(), CC_EB_generator);

    EXPECT_EQ(route2->GetName(), "Campus Connector - Westbound");

    std::list<Stop *> stopList2 = route2->GetStops();
    int stopIndex2 = 0;
    for (std::list<Stop *>::iterator it3 = stopList2.begin(); it3 !=
      stopList2.end(); it3++) {
      EXPECT_EQ((*it3), CC_WB_stops[stopIndex2]);
      stopIndex2++;
    }
    EXPECT_EQ(route2->GetNumStops(), 9);

    std::list<double> distList2 = route2->GetDistanceList();
    int distIndex2 = 0;
    for (std::list<double>::iterator it4 = distList2.begin(); it4 !=
      distList2.end(); it4++) {
      EXPECT_EQ((*it4), CC_WB_distances[distIndex2]);
      distIndex2++;
    }
    EXPECT_EQ(route2->GetGenerator(), CC_WB_generator);
}

TEST_F(RouteTests, UpdateRouteDataTest) {
  route1->UpdateRouteData();
  // since every routedata starts as blank
  // this test checks if the correct values
  // are put into the routedata at update
  RouteData rData = route1->GetRouteData();

  std::vector<StopData> stop_datas_ = rData.stops;
  std::vector<StopData>::iterator iter2 = stop_datas_.begin();
  std::list<Stop *> stops_ = route1->GetStops();

  for (std::list<Stop *>::iterator iter = stops_.begin();
    iter != stops_.end(); iter++) {
    int tempid = (*iter)->GetId();

    EXPECT_EQ(tempid, std::stoi((*iter2).id));
    iter2++;
  }
}


TEST_F(RouteTests, CloneTest) {
  Route * clonedRoute = route1->Clone();
  EXPECT_EQ(clonedRoute->GetName(), route1->GetName());
  EXPECT_EQ(clonedRoute->GetNumStops(), route1->GetNumStops());
  EXPECT_EQ(clonedRoute->GetGenerator(), route1->GetGenerator());

  std::list<Stop *> stopList = route1->GetStops();
  std::list<Stop *> clonedList = clonedRoute->GetStops();

  for (std::list<Stop *>::iterator it = stopList.begin(); it !=
    stopList.end(); it++) {
    EXPECT_EQ((*it)->GetId(), clonedList.front()->GetId());
    clonedList.pop_front();
  }
}

// When route2 updates it should guaranteed have generated at least 1 passenger
// because the generation probabilities are all set to 1.0
// hangs on time to generate! if probability is 1.0 so set to .9999
// it will generate a passenger to the stop 9999/10000 times
TEST_F(RouteTests, UpdateTest) {
  std::ostringstream testString;
  route2->Update(testString);
  EXPECT_EQ(testString.str(), "Time to generate!\n");
  EXPECT_GT(route2->GetFirstStop()->GetNumPassengers(), 0);
}


TEST_F(RouteTests, ReportTest) {
    std::ostringstream testString;
    route1->Report(testString);
    EXPECT_EQ(testString.str(), "Name: Campus Connector - Eastbound\nNum stops:"
        " 8\nID: 0\nPassengers waiting: 0\nID: 1\nPassengers waiting: 0\nID:"
        " 2\nPassengers waiting: 0\nID: 3\nPassengers waiting: 0\nID: 4\n"
        "Passengers waiting: 0\nID: 5\nPassengers waiting: 0\nID: 6\n"
        "Passengers waiting: 0\nID: 7\nPassengers waiting: 0\n");
}

TEST_F(RouteTests, IsAtEndTest) {
  for (int i = 0; i < route1->GetNumStops()-2; i++) {
    route1->NextDestinationStop();
    route1->NextStop();
  }
  EXPECT_EQ(route1->IsAtEnd(), true);
}

// Can't test generate as it was given as private function
/*TEST_F(RouteTests, GenerateTest) {
  std::ostringstream testString;
  route2->GenerateNewPassengers(testString);
  EXPECT_EQ(testString.str(), "Time to generate!\n");
  EXPECT_GT(route2->GetFirstStop()->GetNumPassengers(), 0);
} */
