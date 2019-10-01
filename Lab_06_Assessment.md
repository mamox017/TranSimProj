### Assessment for Lab 06

#### Total score: _89.22_ / _100_

Run on October 01, 09:45:45 AM.


#### System Files and Lab Directory Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab06_google_tests" exists.

+ Pass: Make directory "Lab06_Testing".

+ Pass: Change into directory "Lab06_Testing".


#### Essential Files Exist

+ Pass: Check that file "../labs/lab06_google_tests/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "Lab06 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    11 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintLeadingZeros.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.EpochTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.JanMarchDaysBetween.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.MissingCharGetDate.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.FormatGetUsDate.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.MonthIndex.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.todayTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.operateTest.



+  _50_ / _50_ : Pass: 100% of the tests passed.


### Testing Mutants


#### Testing Mutant 1 for failure

+ Pass: At least one test failed for Mutant 1


#### Testing Mutant 2 for failure

+ Pass: At least one test failed for Mutant 2


#### Testing Mutant 3 for failure

+ Pass: At least one test failed for Mutant 3


#### Testing Mutant 4 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Today's date month off by one


#### Testing Mutant 5 for failure

+ Pass: At least one test failed for Mutant 5


#### Testing Mutant 6 for failure

+ Pass: At least one test failed for Mutant 6


#### Testing Mutant 7 for failure

+ Pass: At least one test failed for Mutant 7


#### Testing Mutant 8 for failure

+ Pass: At least one test failed for Mutant 8


#### Testing Mutant 9 for failure

+ Pass: At least one test failed for Mutant 9


#### Testing Mutant 10 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - 3/1/2016 - 2 should be 2/28/2016, but this version prints 2016-02-27


#### Testing Mutant 11 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - 2016-02-27 + 2 should be 2016-02-29, but this version prints 2016-03-01


#### Testing Mutant 12 for failure

+ Pass: At least one test failed for Mutant 12


#### Testing Mutant 13 for failure

+ Pass: At least one test failed for Mutant 13


#### Testing Mutant 14 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Date which should be Jan 1, 2000 is actually Jan 1, 100.


#### Testing Mutant 15 for failure

+ Pass: At least one test failed for Mutant 15


#### Testing Mutant 16 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Jun 15, 2015 + 5 = Jun 16, 2015


#### Testing Mutant 17 for failure

+ Pass: At least one test failed for Mutant 17


#### Results

+  _39.22_ / _50_ : Fail: 70.59% of the tests passed, but the target is 90.0%.

#### Total score: _89.22_ / _100_

