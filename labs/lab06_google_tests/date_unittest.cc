#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <ctime>

#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues 
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
	Date today;
};



TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";

  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
 
  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";

  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  * 
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */

//mutant 2
TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
}

//mutant 9
TEST_F(DateTest, PrintLeadingZeros){
	Date a(1999, 3, 7);
	Date b(2014, 1, 8);
	Date c(2013, 8, 3);

	std::string expected_out_1 = "1999-03-07";
	std::string expected_out_2 = "2014-01-08";
	std::string expected_out_3 = "2013-08-03";

  testing::internal::CaptureStdout();
  a.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  b.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  c.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

//mutant 1
TEST_F(DateTest, EpochTest){
	Date a(99999999);
	Date b(1569897148);

	std::string expected_out_1 = "03-03-1973";
	std::string expected_out_2 = "10-01-2019";

  testing::internal::CaptureStdout();
  a.PrintUsDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  b.PrintUsDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
}

//mutant 5
TEST_F(DateTest, JanMarchDaysBetween){
	Date a(2016, 1, 1);
	Date b(2016, 3, 1);
  EXPECT_EQ(a.GetUsDate(), "01-01-2016") << "wrong date";
	EXPECT_EQ(b.GetUsDate(), "03-01-2016") << "wrong date";
	EXPECT_EQ(a.DaysBetween(b), 60) << "Days Between Jan & March Incorrect";
}

//mutant 3
TEST_F(DateTest, MissingCharGetDate){
	Date a(2016, 1, 1);
  EXPECT_EQ(a.GetDate(), "2016-01-01") << "wrong date format or missing character";
}
//mutant 6
TEST_F(DateTest, FormatGetUsDate){
	Date a(2016, 1, 1);
  EXPECT_EQ(a.GetUsDate(), "01-01-2016") << "wrong date format or missing character";
}
//mutant 8
TEST_F(DateTest, MonthIndex){
	Date a(2019, 9, 30);
	EXPECT_EQ(a.GetDate(), "2019-09-30") << "wrong month index or format";
}
//mutant 4
TEST_F(DateTest, todayTest){
	Date today(2019, 9, 30);
	EXPECT_EQ(today.GetUsDate(), "09-30-2019") << "month may be off by one";
}
//mutant 7
TEST_F(DateTest, operateTest){
	Date a(2016, 1, 5);
	a = a - 1;
	EXPECT_EQ(a.GetDate(), "2016-01-04") << "subtraction operator implemented incorrectly";
}
/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/
