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
#include "../src/passenger.h"

/******************************************************
* TEST FEATURE SetUp
*******************************************************/

class PassengerTests : public ::testing::Test {
 protected:
    Passenger* passenger;
    Passenger* passenger2;
    Passenger* passenger3;
    Passenger* passenger4;

    virtual void SetUp() {
        passenger = new Passenger();
        passenger2 = new Passenger(5, "Bro");
        //passenger3 = new Passenger(10953, "Stanley");
        passenger4 = new Passenger(21, "David");
    }

    virtual void TearDown() {
        delete passenger;
    }
};


/*******************************************************************************
 * Test Cases
 ******************************************************************************/

/*
methods to test

constructor
update
getonbus
gettotalwait
isonbus
getdestination
report
*/

TEST_F(PassengerTests, ConstructorTest) {
    Passenger* passenger3 = new Passenger(10953, "Stanley");
    EXPECT_EQ(passenger3->GetDestination(), 10953);
    EXPECT_EQ(passenger3->GetName(), "Stanley");
}

TEST_F(PassengerTests, UpdateTest) {
    int before = passenger->GetTotalWait();
    passenger->Update();
    EXPECT_EQ(passenger->GetTotalWait(), before+1);
}
// make better
TEST_F(PassengerTests, GetOnBusTest) {
    EXPECT_EQ(passenger4->IsOnBus(), false);
    passnger4->GetOnBus();
    EXPECT_EQ(passenger4->IsOnBus(), true);    
}

TEST_F(PassengerTests, GetTotalWait) {
    EXPECT_EQ(passenger->GetTotalWait(), 0);
    passenger->GetOnBus();
    EXPECT_GT(passenger->GetTotalWait(), 0);
}

TEST_F(PassengerTests, IsOnBusTest) {
    EXPECT_EQ(passenger->IsOnBus(), false);
    passenger->GetOnBus();
    EXPECT_EQ(passenger->IsOnBus(), true);
}

TEST_F(PassengerTests, GetDestinationTest) {
    EXPECT_EQ(passenger2->GetDestination(), 5);
}

/*TEST_F(PassengerTests, ReportTest){
    EXPECT_EQ(passenger2->Report(std::cout), "");
}*/
