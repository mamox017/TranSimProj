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

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class StopTests : public ::testing::Test {
 protected:
    Stop* stop1;

    virtual void SetUp() {
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
report
*/

TEST_F(StopTests, ConstructorTest) {
    Stop* stop2 = new Stop(6, 6.3, 9.8);
    EXPECT_EQ(stop2->GetId(), 6);
    EXPECT_EQ(stop2->getLong(), 6.3);
    EXPECT_EQ(stop2->getLat(), 9.8);
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

// Loadpassengers maybe?
TEST_F(StopTests, AddPassengersTest) {
    stop1->AddPassengers(new Passenger(15, "Dad"));
    EXPECT_EQ(stop1->GetPassengerList().front()->GetName(), "Dad");
    EXPECT_EQ(stop1->GetPassengerList().front()->GetDestination(), 15);
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
