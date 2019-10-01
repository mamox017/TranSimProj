### Fuller Feedback for Lab 06

Run on September 30, 22:30:52 PM.


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

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread -c ./date.cc
g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread -c ./date_unittest.cc
ar rv gtest_main.a gtest-all.o gtest_main.o
r - gtest-all.o
r - gtest_main.o
g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread date.o date_unittest.o gtest_main.a -o date_unittest
date_unittest.o: In function `DateTest_PrintDateTests_Test::TestBody()':
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/./date_unittest.cc:36: undefined reference to `testing::internal::GetCapturedStdout()'
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/./date_unittest.cc:40: undefined reference to `testing::internal::GetCapturedStdout()'
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/./date_unittest.cc:44: undefined reference to `testing::internal::GetCapturedStdout()'
date_unittest.o: In function `DateTest_PrintDateTestsWithoutNewline_Test::TestBody()':
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/./date_unittest.cc:62: undefined reference to `testing::internal::GetCapturedStdout()'
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/./date_unittest.cc:66: undefined reference to `testing::internal::GetCapturedStdout()'
date_unittest.o:/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/./date_unittest.cc:70: more undefined references to `testing::internal::GetCapturedStdout()' follow
date_unittest.o: In function `testing::internal::PrintTo(std::string const&, std::ostream*)':
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/../../googletest/include/gtest/gtest-printers.h:566: undefined reference to `testing::internal::PrintStringTo(std::string const&, std::ostream*)'
date_unittest.o: In function `testing::AssertionResult testing::internal::CmpHelperEQFailure<std::string, std::string>(char const*, char const*, std::string const&, std::string const&)':
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/../../googletest/include/gtest/gtest.h:1382: undefined reference to `testing::internal::EqFailure(char const*, char const*, std::string const&, std::string const&, bool)'
date_unittest.o: In function `testing::AssertionResult testing::internal::CmpHelperEQFailure<std::string, char [11]>(char const*, char const*, std::string const&, char const (&) [11])':
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/../../googletest/include/gtest/gtest.h:1382: undefined reference to `testing::internal::EqFailure(char const*, char const*, std::string const&, std::string const&, bool)'
date_unittest.o: In function `testing::AssertionResult testing::internal::CmpHelperEQFailure<int, int>(char const*, char const*, int const&, int const&)':
/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_06_Feedback/repo-mamox017/Lab06_Testing/correct/../../googletest/include/gtest/gtest.h:1382: undefined reference to `testing::internal::EqFailure(char const*, char const*, std::string const&, std::string const&, bool)'
gtest_main.a(gtest-all.o): In function `testing::internal::AssertHelper::AssertHelper(testing::TestPartResult::Type, char const*, int, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:365: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::AssertHelper::~AssertHelper()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:369: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::AssertHelper::operator=(testing::Message const&) const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:376: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:378: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:376: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:378: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestOptions::GetOutputFormat[abi:cxx11]()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:415: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:416: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:421: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:421: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, unsigned long, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestOptions::GetAbsolutePathToOutputFile[abi:cxx11]()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:427: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:429: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:436: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:434: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:436: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:434: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:436: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:438: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:438: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:446: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:445: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:445: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:446: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:449: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:453: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:453: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:454: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:434: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:436: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:436: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:445: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:446: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:446: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestOptions::MatchesFilter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:483: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestOptions::FilterMatchesTest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:504: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:504: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:508: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:511: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:514: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:516: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:516: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:517: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:517: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:517: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:518: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:520: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:526: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:527: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:511: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:504: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:504: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:511: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:510: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::ScopedFakeTestPartResultReporter::~ScopedFakeTestPartResultReporter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:600: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::HasOneFailure(char const*, char const*, char const*, testing::TestPartResultArray const&, testing::TestPartResult::Type, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:657: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::SingleFailureChecker::SingleFailureChecker(testing::TestPartResultArray const*, testing::TestPartResult::Type, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:676: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::SingleFailureChecker::~SingleFailureChecker()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:682: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamWideCharsToMessage(wchar_t const*, unsigned long, testing::Message*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:910: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:910: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::SplitString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:927: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find(char, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:929: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:929: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:932: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:932: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:929: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:932: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::Message::Message()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:946: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:946: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::Message::operator<<(wchar_t const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:955: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:955: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::Message::operator<<(wchar_t*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:958: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:958: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::Message::operator<<(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:965: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:965: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::AssertionResult::AssertionResult(testing::AssertionResult const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:990: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:990: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::edit_distance::CreateUnifiedDiff(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, unsigned long)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1209: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1222: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1244: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1247: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1262: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1209: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1209: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::(anonymous namespace)::SplitEscapedString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1274: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1275: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1275: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1283: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1284: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1284: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1288: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1291: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1291: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1284: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1291: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::EqFailure(char const*, char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1331: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1331: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1338: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1338: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CmpHelperEQ(char const*, char const*, long long, long long)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1447: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1448: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1447: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1448: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::CodePointToUtf8[abi:cxx11](unsigned int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1784: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1761: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1761: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::WideStringToUtf8[abi:cxx11](wchar_t const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1827: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1841: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1841: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1827: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1841: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1827: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::String::ShowWideCString[abi:cxx11](wchar_t const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1849: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::CmpHelperSTREQ(char const*, char const*, wchar_t const*, wchar_t const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1879: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1880: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1879: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1880: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CmpHelperSTRNE(char const*, char const*, wchar_t const*, wchar_t const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1896: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1895: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::String::EndsWithCaseInsensitive(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1951: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1952: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1954: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1954: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::String::FormatIntWidth2[abi:cxx11](int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1960: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1962: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1960: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1960: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::String::FormatHexInt[abi:cxx11](int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1967: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1969: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1967: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1967: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::String::FormatByte[abi:cxx11](unsigned char)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1974: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1977: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1974: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1974: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::StringStreamToString(std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1983: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1984: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1985: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1987: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1988: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve(unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1991: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1993: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(char)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1983: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1998: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1983: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::AppendUserMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, testing::Message const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2005: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2006: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2009: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2004: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2009: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2004: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestResult::RecordProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, testing::TestProperty const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2065: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2065: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2070: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2070: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2065: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2070: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::GetReservedAttributesForElement(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2121: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::ValidateTestPropertyName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2146: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2146: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestResult::ValidateTestProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, testing::TestProperty const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::Test::Test()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2215: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::Test::~Test()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2222: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::Test::RecordProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2245: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2245: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2245: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2245: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2245: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2245: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ReportFailureInUnknownLocation(testing::TestPartResult::Type, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2254: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2254: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2254: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::GoogleTestFailureException::GoogleTestFailureException(testing::TestPartResult const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2370: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2370: undefined reference to `std::runtime_error::runtime_error(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2370: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2370: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestInfo::TestInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*, char const*, testing::internal::CodeLocation, void const*, testing::internal::TestFactoryBase*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2518: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2518: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2511: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2510: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2511: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2518: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2518: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestInfo::~TestInfo()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2521: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2521: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::MakeAndRegisterTestInfo(char const*, char const*, char const*, char const*, testing::internal::CodeLocation, void const*, void (*)(), void (*)(), testing::internal::TestFactoryBase*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2555: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ReportInvalidTestCaseType(char const*, testing::internal::CodeLocation)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2574: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2575: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2574: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2575: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2577: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2575: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2577: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestCase::TestCase(char const*, char const*, void (*)(), void (*)())':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2728: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2724: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2724: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2728: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestCase::~TestCase()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2732: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestCase::~TestCase()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2735: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::FormatCountableNoun(int, char const*, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2812: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2812: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2812: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2812: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::PrintTestPartResultToString(testing::TestPartResult const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2853: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2853: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::PrintTestPartResult(testing::TestPartResult const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2863: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2862: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2862: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ShouldUseColor(bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2917: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::PrettyUnitTestResultPrinter::OnTestIterationStart(testing::UnitTest const&, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3061: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3085: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3085: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3086: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3087: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3086: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3087: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::PrettyUnitTestResultPrinter::OnTestCaseStart(testing::TestCase const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3102: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3100: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3100: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::PrettyUnitTestResultPrinter::OnTestEnd(testing::TestInfo const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3141: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3141: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3141: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::PrettyUnitTestResultPrinter::OnTestCaseEnd(testing::TestCase const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3155: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3155: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3153: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3153: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::PrettyUnitTestResultPrinter::OnTestIterationEnd(testing::UnitTest const&, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3196: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3196: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3197: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3198: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3200: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3201: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3205: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3205: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3211: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3211: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3197: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3198: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3201: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3205: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3211: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::TestEventRepeater::~TestEventRepeater()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3274: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::XmlUnitTestResultPrinter(char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3423: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3424: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3424: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3423: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::OnTestIterationEnd(testing::UnitTest const&, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3439: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3452: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3458: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3460: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3460: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3458: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3460: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3458: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::EscapeXml(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3480: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3481: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3507: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3507: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::RemoveInvalidXmlCharacters(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3524: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3525: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3525: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve(unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3526: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::begin() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3526: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::end() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3528: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::push_back(char)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3526: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FormatTimeInMillisAsSeconds[abi:cxx11](long long)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3551: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3553: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3551: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3551: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::FormatEpochTimeInMillisAsIso8601[abi:cxx11](long long)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3577: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3583: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3582: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3582: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3581: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3581: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3580: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::OutputXmlAttribute(std::ostream*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3618: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3618: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3620: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3620: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3620: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3620: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::OutputXmlTestInfo(std::ostream*, char const*, testing::TestInfo const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3629: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3632: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3632: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3632: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3632: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3635: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3635: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3635: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3635: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3639: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3642: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3642: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3642: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3642: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3644: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3644: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3645: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3646: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3646: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3646: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3646: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3647: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3647: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3658: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3660: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3660: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3661: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3660: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3660: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3662: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3663: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3663: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3662: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3658: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3657: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3629: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3632: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::PrintXmlTestCase(std::ostream*, testing::TestCase const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3677: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3678: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3679: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3679: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3679: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3679: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3680: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3680: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3681: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3682: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3682: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3683: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3684: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3684: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3686: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3687: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3687: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3687: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3687: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3688: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3688: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3689: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3691: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3690: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3697: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3677: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3679: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3679: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3680: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3681: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3682: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::PrintXmlUnitTest(std::ostream*, testing::UnitTest const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3703: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3706: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3708: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3708: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3709: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3710: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3710: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3711: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3712: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3712: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3714: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3715: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3715: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3715: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3715: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3716: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3716: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3718: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3719: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3719: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3720: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3723: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3723: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3724: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3727: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3727: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3729: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3729: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3729: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3729: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3736: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3703: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3708: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3709: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3710: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3711: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3712: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::TestPropertiesAsXmlAttributes[abi:cxx11](testing::TestResult const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3747: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3747: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3747: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3747: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3747: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::UrlEncode[abi:cxx11](char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3762: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3763: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve(unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3770: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3770: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3770: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3773: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::push_back(char)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3770: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3770: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3770: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::SocketWriter::MakeConnection()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3792: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3792: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3817: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3817: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::ScopedTrace::ScopedTrace(char const*, int, testing::Message const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3833: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3833: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::OsStackTraceGetter::CurrentStackTrace[abi:cxx11](int, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3852: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::UnitTest::AddTestPartResult(testing::TestPartResult::Type, char const*, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4124: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4129: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4129: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4135: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4135: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4124: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4124: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::UnitTest::Run()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4187: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
gtest_main.a(gtest-all.o): In function `testing::UnitTest::UnitTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4300: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::UnitTest::~UnitTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4306: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestImpl::~UnitTestImpl()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4365: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestImpl::RecordProperty(testing::TestProperty const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4373: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4377: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4380: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4383: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4373: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4373: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestImpl::ConfigureXmlOutput()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4404: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4404: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4406: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4401: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4404: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4404: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4401: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestImpl::ConfigureStreamingOutput()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4417: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4418: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find(char, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4420: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4421: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4421: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4420: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4423: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4421: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4421: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4420: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestImpl::GetTestCase(char const*, char const*, void (*)(), void (*)())':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4509: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4509: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4519: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4519: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4509: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4516: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4519: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ShouldShard(char const*, char const*, bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4732: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4732: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4740: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4740: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4749: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4749: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4732: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4740: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4749: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::UnitTestImpl::FilterTests(testing::internal::UnitTestImpl::ReactionToSharding)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4803: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4808: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4808: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4803: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4808: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4803: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ParseFlagValue(char const*, char const*, bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5022: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5022: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5022: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5023: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5024: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5022: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5041: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5041: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ParseStringFlag(char const*, char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5095: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
gtest_main.a(gtest-all.o): In function `testing::internal::PrintColorEncoded(char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5139: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5139: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5139: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::LoadFlagsFromFile(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5254: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5256: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5267: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5269: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5262: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5262: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::InDeathTestChild()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:143: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestAbort(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:271: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:275: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::GetLastErrnoDescription[abi:cxx11]()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:316: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::FailFromInternalError(int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:336: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:336: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:340: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:340: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:336: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:340: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTest::DeathTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:349: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:349: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:349: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTest::LastMessage()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:363: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTest::set_last_death_test_message(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:367: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestImpl::ReadAndInterpretStatusByte()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:471: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:471: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:473: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestImpl::Abort(testing::internal::DeathTest::AbortReason)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:489: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::FormatDeathTestOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:505: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:507: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find(char, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:508: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:510: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:513: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestImpl::Passed(bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:554: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:558: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestImpl::Passed(bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:566: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:572: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:577: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:576: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:586: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:545: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:554: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ForkingDeathTest::Wait()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:817: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::NoExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:836: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:836: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:840: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::NoExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:842: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:842: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:854: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::NoExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:857: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::NoExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:869: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestChildMain(void*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:962: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestChildMain(void*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:972: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:982: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:983: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:983: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:982: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:982: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:982: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:982: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestSpawnChild(char* const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1064: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestSpawnChild(char* const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1077: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestSpawnChild(char* const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1089: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestSpawnChild(char* const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1094: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestSpawnChild(char* const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1106: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTestSpawnChild(char* const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1110: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1131: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1134: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1137: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1138: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1138: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1138: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1138: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1138: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1138: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1140: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1143: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1143: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1143: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1143: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1143: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1143: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTest::AssumeRole()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1146: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1147: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1149: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1149: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1157: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::DefaultDeathTestFactory::Create(char const*, testing::internal::RE const*, char const*, int, testing::internal::DeathTest**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1206: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1208: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1216: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1215: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ParseInternalRunDeathTestFlag()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1302: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1302: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1302: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1330: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1302: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1330: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:1335: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::GetCurrentDir()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:116: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:116: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:116: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::RemoveExtension(char const*) const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:125: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:125: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:128: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:128: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:127: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:127: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:125: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:131: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:127: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:125: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::RemoveDirectoryName() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:157: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::RemoveFileName() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:168: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:170: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, unsigned long, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:170: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:170: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:172: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:168: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:168: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::MakeFileName(testing::internal::FilePath const&, testing::internal::FilePath const&, int, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:187: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:189: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:189: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:189: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:191: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:192: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:192: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:191: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:191: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:191: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:187: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::FileOrDirectoryExists() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:217: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::IsRootDirectory() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:260: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:260: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::IsAbsolutePath() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:266: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::IsDirectory() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:301: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:302: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:302: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::CreateDirectoriesRecursively() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:313: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::CreateFolder() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:334: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::RemoveTrailingPathSeparator() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:348: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:348: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr(unsigned long, unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:348: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:348: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::Normalize()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:357: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:358: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:361: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:362: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:364: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-filepath.cc:382: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
gtest_main.a(gtest-all.o): In function `testing::internal::GetThreadCount()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:111: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:111: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::RE::Init(char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:616: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:616: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:616: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FormatFileLocation[abi:cxx11](char const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:881: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:889: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:889: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:889: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:881: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:889: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:889: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::FormatCompilerIndependentFileLocation[abi:cxx11](char const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:900: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:903: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:905: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:905: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:900: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:905: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:905: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:900: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::GTestLog::GTestLog(testing::internal::GTestLogSeverity, char const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:915: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:915: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:915: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CaptureStream(int, char const*, testing::internal::CapturedStream**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1023: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::GetCapturedStream[abi:cxx11](testing::internal::CapturedStream**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1030: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::TempDir[abi:cxx11]()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1072: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::ReadEntireFile[abi:cxx11](_IO_FILE*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1097: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, unsigned long, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::SetInjectableArgvs(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1110: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::FlagToEnvVar(char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1139: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1140: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1136: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1136: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ParseInt32(testing::Message const&, char const*, int*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1161: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1161: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1178: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1178: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1161: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1178: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::BoolFromGTestEnv(char const*, bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1196: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1195: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::Int32FromGTestEnv(char const*, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1209: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1218: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1219: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1208: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1219: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1208: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StringFromGTestEnv[abi:cxx11](char const*, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1234: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1252: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1252: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1255: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1233: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1252: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1233: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::PrintStringTo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:355: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:355: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::data() const'
gtest_main.a(gtest-all.o): In function `testing::internal::PrintWideStringTo(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:367: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::size() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:367: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::data() const'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::ExtractSummary[abi:cxx11](char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-test-part.cc:54: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::HasNewFatalFailureHelper::~HasNewFatalFailureHelper()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-test-part.cc:99: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::SplitIntoTestNames(char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:52: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:52: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:52: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:52: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TypedTestCasePState::VerifyRegisteredTestNames(char const*, int, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:104: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:106: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-typed-test.cc:104: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::Delete<testing::TestInfo>(testing::TestInfo*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:341: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `int testing::internal::(anonymous namespace)::ReadProcFileField<int>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:97: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:98: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:100: undefined reference to `std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:97: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:97: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CharFormat testing::internal::PrintAsCharLiteralTo<wchar_t, wchar_t>(wchar_t, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `bool testing::(anonymous namespace)::IsSubstringPred<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1575: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, unsigned long) const'
gtest_main.a(gtest-all.o): In function `bool testing::(anonymous namespace)::IsSubstringPred<std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&, std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1575: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::find(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&, unsigned long) const'
gtest_main.a(gtest-all.o): In function `testing::internal::CharFormat testing::internal::PrintAsCharLiteralTo<unsigned char, unsigned char>(unsigned char, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CharFormat testing::internal::PrintAsCharLiteralTo<unsigned char, signed char>(signed char, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:183: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `__static_initialization_and_destruction_0(int, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:218: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:226: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `__static_initialization_and_destruction_0(int, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:108: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:108: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:370: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:370: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocalValueHolderBase::~ThreadLocalValueHolderBase()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2029: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::StripTrailingSpaces(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2295: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::end()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2296: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::begin()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2297: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::erase(__gnu_cxx::__normal_iterator<char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2298: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::Message::Message(testing::Message const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:96: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:97: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:97: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:96: undefined reference to `operator delete(void*, unsigned long)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:97: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::operator<<(std::ostream&, testing::Message const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:233: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:233: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:233: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::FilePath()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:61: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::FilePath(testing::internal::FilePath const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:62: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::FilePath(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:64: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:64: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::Set(testing::internal::FilePath const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:74: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::c_str() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:78: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::IsEmpty() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:111: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
gtest_main.a(gtest-all.o): In function `testing::internal::GetPrefixUntilComma[abi:cxx11](char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-internal.h:607: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTest::~DeathTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-death-test-internal.h:82: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestFactory::~DeathTestFactory()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-death-test-internal.h:142: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::InternalRunDeathTestFlag::InternalRunDeathTestFlag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int, int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-death-test-internal.h:241: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::InternalRunDeathTestFlag::~InternalRunDeathTestFlag()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-death-test-internal.h:243: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::UniversalTersePrinter<wchar_t const*>::Print(wchar_t const*, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:828: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(wchar_t const*, std::allocator<wchar_t> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:828: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:828: undefined reference to `std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::TestPartResult(testing::TestPartResult::Type, char const*, int, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:68: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:68: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:68: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:68: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::file_name() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:77: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:77: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::summary() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:85: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::message() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:88: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestPartResultReporterInterface::~TestPartResultReporterInterface()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:148: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::AssertionResult::AppendMessage(testing::Message const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:322: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:323: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:323: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:323: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:323: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::TestProperty(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:492: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:492: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:492: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::key() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:497: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::value() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:502: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::SetValue(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:507: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::TestInfo::test_case_name() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:651: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestInfo::name() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:654: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestInfo::type_param() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:660: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestInfo::value_param() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:668: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::TestCase::name() const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:800: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:806: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const' follow
gtest_main.a(gtest-all.o): In function `testing::TestEventListener::~TestEventListener()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:993: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::AssertHelper::AssertHelperData::AssertHelperData(testing::TestPartResult::Type, char const*, int, char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:1691: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::GTestFlagSaver::GTestFlagSaver()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::GTestFlagSaver::GTestFlagSaver()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:169: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:170: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:172: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:173: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:175: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:181: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)' follow
gtest_main.a(gtest-all.o): In function `testing::internal::GTestFlagSaver::GTestFlagSaver()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:165: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::GTestFlagSaver::~GTestFlagSaver()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:190: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:191: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:193: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:194: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:196: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:202: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)' follow
gtest_main.a(gtest-all.o): In function `testing::internal::GTestFlagSaver::~GTestFlagSaver()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:186: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:186: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:186: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:186: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:186: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:186: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::TestPropertyKeyIs::TestPropertyKeyIs(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:352: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::OsStackTraceGetterInterface::~OsStackTraceGetterInterface()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:421: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::FilePath::~FilePath()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-filepath.h:59: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::AbstractSocketWriter::~AbstractSocketWriter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1040: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::AbstractSocketWriter::SendLn(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1050: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1050: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::SocketWriter::SocketWriter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1058: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1058: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1058: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1058: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::SocketWriter::~SocketWriter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1062: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1062: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::SocketWriter::~SocketWriter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1065: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::SocketWriter::Send(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1072: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1073: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1076: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1076: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::EmptyTestEventListener::~EmptyTestEventListener()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:1044: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::StreamingListener(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1104: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::OnTestProgramStart(testing::UnitTest const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1110: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::OnTestProgramEnd(testing::UnitTest const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1116: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1116: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1116: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1116: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::OnTestCaseStart(testing::TestCase const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1134: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::OnTestCaseEnd(testing::TestCase const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1140: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1139: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::OnTestStart(testing::TestInfo const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1144: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1144: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1144: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1144: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1144: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::OnTestEnd(testing::TestInfo const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1151: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1150: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::Start()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1169: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1169: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1169: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::FormatBool[abi:cxx11](bool)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1171: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::AssertHelper::AssertHelperData::~AssertHelperData()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:1686: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TestPropertyKeyIs::~TestPropertyKeyIs()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:347: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TestPropertyKeyIs::TestPropertyKeyIs(testing::internal::TestPropertyKeyIs&&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:347: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::internal::CodeLocation::CodeLocation(testing::internal::CodeLocation const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-internal.h:504: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::TraceInfo::TraceInfo()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:457: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TraceInfo::~TraceInfo()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:457: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::~TestPartResult()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::TestPartResult(testing::TestPartResult&&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::~TestProperty()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TestCaseNameIs::TestCaseNameIs(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4479: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::TestCaseNameIs::operator()(testing::TestCase const*) const':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4483: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `testing::internal::TestCaseNameIs::~TestCaseNameIs()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4475: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TestCaseNameIs::TestCaseNameIs(testing::internal::TestCaseNameIs&&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4475: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestImpl::~DeathTestImpl()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::DeathTestImpl::~DeathTestImpl()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:385: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::ForkingDeathTest::~ForkingDeathTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:787: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::CapturedStream::CapturedStream(int)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:936: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:977: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=(char const*)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:936: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CapturedStream::~CapturedStream()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:985: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:984: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::CapturedStream::GetCapturedString[abi:cxx11]()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:997: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-port.cc:1000: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*)':
/usr/include/c++/7/bits/basic_string.h:5928: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/usr/include/c++/7/bits/basic_string.h:5929: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(char const*)'
/usr/include/c++/7/bits/basic_string.h:5930: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)':
/usr/include/c++/7/bits/basic_string.h:5968: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/usr/include/c++/7/bits/basic_string.h:5968: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/usr/include/c++/7/bits/basic_string.h:5969: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity() const'
/usr/include/c++/7/bits/basic_string.h:5970: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity() const'
/usr/include/c++/7/bits/basic_string.h:5971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::insert(unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/usr/include/c++/7/bits/basic_string.h:5972: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/usr/include/c++/7/bits/basic_string.h:5972: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)':
/usr/include/c++/7/bits/basic_string.h:5979: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::insert(unsigned long, char const*)'
/usr/include/c++/7/bits/basic_string.h:5979: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<char const*, void>(char const*, char const*, std::allocator<char> const&)':
/usr/include/c++/7/bits/basic_string.h:606: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data()'
/usr/include/c++/7/bits/basic_string.h:606: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Alloc_hider::_Alloc_hider(char*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > testing::PrintToString<char const*>(char const* const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:983: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > testing::PrintToString<wchar_t const*>(wchar_t const* const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:983: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::internal::scoped_ptr<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::reset(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:1145: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:1145: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `bool std::operator==<char, std::char_traits<char>, std::allocator<char> >(char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/bits/basic_string.h:6033: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(char const*) const'
gtest_main.a(gtest-all.o): In function `testing::internal::scoped_ptr<testing::internal::InternalRunDeathTestFlag>::reset(testing::internal::InternalRunDeathTestFlag*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:1145: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&, char const*)':
/usr/include/c++/7/bits/basic_string.h:5991: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(char const*)'
/usr/include/c++/7/bits/basic_string.h:5991: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::Message& testing::Message::operator<< <std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-message.h:131: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::AssertionResult testing::internal::FloatingPointLE<float>(char const*, char const*, float, float)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1403: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1407: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1414: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1413: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1407: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1403: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1414: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1413: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1407: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1403: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::AssertionResult testing::internal::FloatingPointLE<double>(char const*, char const*, double, double)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1403: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1407: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1414: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1413: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1407: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1403: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1414: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1413: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1407: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:1403: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/bits/basic_string.h:5955: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/usr/include/c++/7/bits/basic_string.h:5955: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::internal::TestPropertyKeyIs::TestPropertyKeyIs(testing::internal::TestPropertyKeyIs const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:347: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `bool std::operator==<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*)':
/usr/include/c++/7/bits/basic_string.h:6045: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(char const*) const'
gtest_main.a(gtest-all.o): In function `void testing::internal::HandleExceptionsInMethodIfSupported<testing::Test, void>(testing::Test*, void (testing::Test::*)(), char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2445: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2449: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2445: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2449: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::Test* testing::internal::HandleExceptionsInMethodIfSupported<testing::internal::TestFactoryBase, testing::Test*>(testing::internal::TestFactoryBase*, testing::Test* (testing::internal::TestFactoryBase::*)(), char const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2445: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:2449: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocal<testing::TestPartResultReporterInterface*>::ThreadLocal(testing::TestPartResultReporterInterface* const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2046: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocal<std::vector<testing::internal::TraceInfo, std::allocator<testing::internal::TraceInfo> > >::ThreadLocal()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2043: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::TestCaseNameIs::TestCaseNameIs(testing::internal::TestCaseNameIs const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:4475: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `void testing::internal::ParseGoogleTestFlagsOnlyImpl<char>(int*, char**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5282: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5281: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5281: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::ParseGoogleTestFlagsOnlyImpl<wchar_t>(int*, wchar_t**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5282: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5281: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5281: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::InitGoogleTestImpl<char>(int*, char**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5352: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5352: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::InitGoogleTestImpl<wchar_t>(int*, wchar_t**)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5352: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:5352: more undefined references to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()' follow
gtest_main.a(gtest-all.o): In function `void testing::internal::Arguments::AddArguments<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:924: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(char const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/bits/basic_string.tcc:1164: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string()'
/usr/include/c++/7/bits/basic_string.tcc:1165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/usr/include/c++/7/bits/basic_string.tcc:1165: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve(unsigned long)'
/usr/include/c++/7/bits/basic_string.tcc:1166: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(char const*, unsigned long)'
/usr/include/c++/7/bits/basic_string.tcc:1167: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/usr/include/c++/7/bits/basic_string.tcc:1168: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `bool testing::internal::ParseNaturalNumber<int>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:971: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned long) const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:989: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str() const'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char)':
/usr/include/c++/7/bits/basic_string.h:5945: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/usr/include/c++/7/bits/basic_string.h:5946: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append(unsigned long, char)'
/usr/include/c++/7/bits/basic_string.h:5947: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::PrintCharAndCodeTo<unsigned char, unsigned char>(unsigned char, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::PrintCharAndCodeTo<unsigned char, signed char>(signed char, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void testing::internal::PrintCharAndCodeTo<wchar_t, wchar_t>(wchar_t, std::ostream*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-printers.cc:236: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `__gnu_cxx::__enable_if<std::__is_char<char>::__value, bool>::__type std::operator==<char>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/bits/basic_string.h:6019: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/usr/include/c++/7/bits/basic_string.h:6019: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/usr/include/c++/7/bits/basic_string.h:6020: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const'
/usr/include/c++/7/bits/basic_string.h:6020: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::data() const'
/usr/include/c++/7/bits/basic_string.h:6020: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::data() const'
gtest_main.a(gtest-all.o): In function `testing::internal::scoped_ptr<testing::internal::GTestFlagSaver>::reset(testing::internal::GTestFlagSaver*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:1145: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::scoped_ptr<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const>::reset(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:1145: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:1145: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `bool std::operator< <char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/bits/basic_string.h:6097: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const'
gtest_main.a(gtest-all.o): In function `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > testing::PrintToString<long long>(long long const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:983: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::str() const'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-printers.h:981: undefined reference to `std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()'
gtest_main.a(gtest-all.o): In function `testing::TestPartResult::TestPartResult(testing::TestPartResult const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest-test-part.h:47: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::TestProperty(testing::TestProperty const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::TraceInfo::TraceInfo(testing::internal::TraceInfo const&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:457: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocal<testing::TestPartResultReporterInterface*>::ValueHolderFactory::~ValueHolderFactory()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2101: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocal<std::vector<testing::internal::TraceInfo, std::allocator<testing::internal::TraceInfo> > >::ValueHolderFactory::~ValueHolderFactory()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2101: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `void std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag)':
/usr/include/c++/7/bits/basic_string.tcc:219: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(unsigned long&, unsigned long)'
/usr/include/c++/7/bits/basic_string.tcc:219: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(char*)'
/usr/include/c++/7/bits/basic_string.tcc:220: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(unsigned long)'
/usr/include/c++/7/bits/basic_string.tcc:225: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data() const'
/usr/include/c++/7/bits/basic_string.tcc:225: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_S_copy_chars(char*, char const*, char const*)'
/usr/include/c++/7/bits/basic_string.tcc:232: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(unsigned long)'
/usr/include/c++/7/bits/basic_string.tcc:228: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose()'
gtest_main.a(gtest-all.o): In function `void __gnu_cxx::new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::construct<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)':
/usr/include/c++/7/ext/new_allocator.h:136: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `void std::_Destroy<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)':
/usr/include/c++/7/bits/stl_construct.h:98: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void __gnu_cxx::new_allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::destroy<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)':
/usr/include/c++/7/ext/new_allocator.h:140: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void std::_Construct<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/bits/stl_construct.h:75: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, unsigned long>::~pair()':
/usr/include/c++/7/bits/stl_pair.h:208: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::destroy<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)':
/usr/include/c++/7/ext/new_allocator.h:140: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::TestProperty::TestProperty(testing::TestProperty&&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/gtest.h:486: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `testing::internal::TraceInfo::TraceInfo(testing::internal::TraceInfo&&)':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:457: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `void std::_Construct<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)':
/usr/include/c++/7/bits/stl_construct.h:75: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)'
gtest_main.a(gtest-all.o): In function `std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, unsigned long>::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, 0ul>(std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>&, std::tuple<>&, std::_Index_tuple<0ul>, std::_Index_tuple<>)':
/usr/include/c++/7/tuple:1652: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `void std::_Construct<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, char const* const&>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, char const* const&)':
/usr/include/c++/7/bits/stl_construct.h:75: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&)'
gtest_main.a(gtest-all.o): In function `void __gnu_cxx::new_allocator<std::_Rb_tree_node<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::construct<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
/usr/include/c++/7/ext/new_allocator.h:136: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)'
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocal<std::vector<testing::internal::TraceInfo, std::allocator<testing::internal::TraceInfo> > >::DefaultValueHolderFactory::~DefaultValueHolderFactory()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2108: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::ThreadLocal<testing::TestPartResultReporterInterface*>::InstanceValueHolderFactory::~InstanceValueHolderFactory()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-port.h:2117: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::DefaultDeathTestFactory::~DefaultDeathTestFactory()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-death-test-internal.h:148: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::ExecDeathTest::~ExecDeathTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:879: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::NoExecDeathTest::~NoExecDeathTest()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-death-test.cc:824: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:445: more undefined references to `operator delete(void*, unsigned long)' follow
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::~XmlUnitTestResultPrinter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3349: undefined reference to `std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()'
gtest_main.a(gtest-all.o): In function `testing::internal::XmlUnitTestResultPrinter::~XmlUnitTestResultPrinter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3349: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::PrettyUnitTestResultPrinter::~PrettyUnitTestResultPrinter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest.cc:3029: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::DefaultPerThreadTestPartResultReporter::~DefaultPerThreadTestPartResultReporter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:481: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::DefaultGlobalTestPartResultReporter::~DefaultGlobalTestPartResultReporter()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:465: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o): In function `testing::internal::StreamingListener::~StreamingListener()':
/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/src/gtest-internal-inl.h:1035: undefined reference to `operator delete(void*, unsigned long)'
gtest_main.a(gtest-all.o):/home/mamox017/3081_f19/repo-mamox017/labs/lab06_google_tests/../../googletest/include/gtest/internal/gtest-internal.h:148: more undefined references to `operator delete(void*, unsigned long)' follow
collect2: error: ld returned 1 exit status
Makefile:88: recipe for target 'date_unittest' failed
make: *** [date_unittest] Error 1
</pre>



+ Skip: Check that file "date_unittest" exists.

  This test was not run because of an earlier failing test.

+ Skip: Get all google tests.

  This test was not run because of an earlier failing test.


#### Results

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.

+ Skip: Check that a GoogleTest test passes.

  This test was not run because of an earlier failing test.


### Testing Mutants


#### Testing Mutant 1 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 2 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 3 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 4 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 5 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 6 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 7 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 8 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 9 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.

