### Feedback for Iteration 1

Run on November 07, 09:43:13 AM.

<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will likely be updated to contain more tests as they are developed. Check back periodically for more feedback. Take note that these tests are _incredibly slow_ because of the time it takes to compile 4 executables.

<hr>


### Basic Tests on Devel

+ Pass: Checkout devel branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Pass: Check that make compiles.



+ Pass: Check that file "build/bin/transit_sim" exists.

+ Pass: Change into directory "tests".

+ Pass: Check that make compiles.



+ Pass: Check that file "../build/bin/unittest" exists.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors (Found: 0 errors)

+ Pass: Restoring mainpage.h



+ Pass: Change into directory "..".


#### Doxygen Tests

+ Pass: Change into directory "docs/".


##### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.

+ Fail: Check that file "Doxyfile" exists.

     "Doxyfile" not found.

+ Fail: Generating documentation by running doxygen

+ Fail: Check that directory "html" exists.

     "html" not found.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Basic Tests on Master

+ Pass: Checkout master branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>........PROJ MAKEFILE: Making TransitSim.......................................
cd src; make -j
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/src'
==== Auto-Generating Dependencies for local_simulator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/local_simulator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
==== Auto-Generating Dependencies for bus.cc. ====
==== Auto-Generating Dependencies for passenger_factory.cc. ====
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/bus.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/bus.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers bus.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/random_passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/random_passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers random_passenger_generator.cc
==== Auto-Generating Dependencies for passenger.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_factory.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_factory.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_factory.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger.cc
==== Auto-Generating Dependencies for passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_generator.cc
==== Auto-Generating Dependencies for route.cc. ====
==== Auto-Generating Dependencies for stop.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/route.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/route.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers route.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/stop.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/stop.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers stop.cc
==== Compiling passenger.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger.o passenger.cc
==== Compiling passenger_factory.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_factory.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_factory.o passenger_factory.cc
==== Compiling passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_generator.o passenger_generator.cc
==== Compiling bus.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/bus.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/bus.o bus.cc
==== Compiling route.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/route.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/route.o route.cc
==== Compiling random_passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/random_passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/random_passenger_generator.o random_passenger_generator.cc
==== Compiling stop.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/stop.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/stop.o stop.cc
==== Compiling local_simulator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/local_simulator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/local_simulator.o local_simulator.cc
In file included from ../src/bus.h:14:0,
                 from ../src/stop.h:13,
                 from ../src/passenger_generator.h:12,
                 from passenger_generator.cc:7:
../src/route.h:21:27: error: Stop has not been declared
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
                           ^~~~
../src/route.h:34:13: error: Stop was not declared in this scope
   std::list<Stop *> stops_;
             ^~~~
../src/route.h:34:13: note: suggested alternative: atol
   std::list<Stop *> stops_;
             ^~~~
             atol
../src/route.h:34:19: error: template argument 1 is invalid
   std::list<Stop *> stops_;
                   ^
../src/route.h:34:19: error: template argument 2 is invalid
bus.cc: In member function bool Bus::LoadPassenger(Passenger*):
bus.cc:13:37: warning: unused parameter new_passenger [-Wunused-parameter]
 bool Bus::LoadPassenger(Passenger * new_passenger) {
                                     ^~~~~~~~~~~~~
route.cc:3:1: error: prototype for Route::Route(std::__cxx11::string, Stop**, double*, int) does not match any in class Route
 Route::Route(std::string name, Stop ** stops, double * distances, int num_stops) {
 ^~~~~
In file included from route.cc:1:0:
route.h:19:7: error: candidates are: Route::Route(Route&&)
 class Route {
       ^~~~~
route.h:19:7: error:                 Route::Route(const Route&)
route.h:21:3: error:                 Route::Route(std::__cxx11::string, Stop**, double*, int, PassengerGenerator*)
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
   ^~~~~
route.cc:21:6: error: prototype for void Route::Report() does not match any in class Route
 void Route::Report() {
      ^~~~~
In file included from route.cc:1:0:
route.h:25:8: error: candidate is: void Route::Report(std::ostream&)
   void Report(std::ostream&);
        ^~~~~~
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/route.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/route.o] Error 1
make[1]: *** Waiting for unfinished jobs....
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_generator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/passenger_generator.o] Error 1
stop.cc: In member function int Stop::AddPassengers(Passenger*):
stop.cc:10:37: warning: unused parameter pass [-Wunused-parameter]
 int Stop::AddPassengers(Passenger * pass) {
                                     ^~~~
In file included from ../src/bus.h:14:0,
                 from ../src/stop.h:13,
                 from ../src/passenger_generator.h:12,
                 from ../src/random_passenger_generator.h:12,
                 from random_passenger_generator.cc:10:
../src/route.h:21:27: error: Stop has not been declared
   Route(std::string name, Stop ** stops, double * distances, int num_stops,
                           ^~~~
../src/route.h:34:13: error: Stop was not declared in this scope
   std::list<Stop *> stops_;
             ^~~~
../src/route.h:34:13: note: suggested alternative: atol
   std::list<Stop *> stops_;
             ^~~~
             atol
../src/route.h:34:19: error: template argument 1 is invalid
   std::list<Stop *> stops_;
                   ^
../src/route.h:34:19: error: template argument 2 is invalid
local_simulator.cc: In member function virtual bool LocalSimulator::Update():
local_simulator.cc:215:34: error: no matching function for call to Bus::Report(std::ostream&)
     (*bus_iter)->Report(std::cout);
                                  ^
In file included from ../src/simulator.h:12:0,
                 from ../src/local_simulator.h:11,
                 from local_simulator.cc:6:
../src/bus.h:29:8: note: candidate: void Bus::Report()
   void Report();
        ^~~~~~
../src/bus.h:29:8: note:   candidate expects 0 arguments, 1 provided
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/random_passenger_generator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/random_passenger_generator.o] Error 1
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/local_simulator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/build/obj/transit_sim/local_simulator.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/project/src'
makefile:11: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



+ Skip: Check that file "build/bin/transit_sim" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "tests".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for ../src/local_simulator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/local_simulator.d -MP -MT ../build/obj/tests/local_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/external/install/include   -std=c++11 ../src/local_simulator.cc
==== Compiling ../src/local_simulator.cc into ../build/obj/tests/local_simulator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-mamox017/external/install/include   -std=c++11  -c -o  ../build/obj/tests/local_simulator.o ../src/local_simulator.cc
../src/local_simulator.cc: In member function virtual bool LocalSimulator::Update():
../src/local_simulator.cc:215:34: error: no matching function for call to Bus::Report(std::ostream&)
     (*bus_iter)->Report(std::cout);
                                  ^
In file included from ../src/simulator.h:12:0,
                 from ../src/local_simulator.h:11,
                 from ../src/local_simulator.cc:6:
../src/bus.h:29:8: note: candidate: void Bus::Report()
   void Report();
        ^~~~~~
../src/bus.h:29:8: note:   candidate expects 0 arguments, 1 provided
Makefile:140: recipe for target '../build/obj/tests/local_simulator.o' failed
make: *** [../build/obj/tests/local_simulator.o] Error 1
</pre>



+ Skip: Check that file "../build/bin/unittest" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Fail: Check that file "mainpage.h" exists.

     "mainpage.h" not found.

+ Skip: Ignoring mainpage.h

  This test was not run because of an earlier failing test.

+ Skip: Grading style compliancy errors

  This test was not run because of an earlier failing test.

+ Skip: Restoring mainpage.h

  This test was not run because of an earlier failing test.

+ Skip: Change into directory "..".

  This test was not run because of an earlier failing test.


#### Doxygen Tests

+ Fail: Change into directory "docs/".

     Directory "docs/" not found.


##### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.

+ Fail: Check that file "Doxyfile" exists.

     "Doxyfile" not found.

+ Fail: Generating documentation by running doxygen

+ Fail: Check that directory "html" exists.

     "html" not found.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		9eb3d248a0fa215d8899dbdf4e0ca30dc0ac802e	refs/heads/devel

		8960f5b87bb57f5dbb449b5dd2f5f467a05d0716	refs/heads/fix/01-compilation-errors

		5ec2491ea7cf90b04ceffdafdcdef92191c41f55	refs/heads/fix/02-compilation-errors

		c66fa5b45e233f3bbbb1374c42566bbe78b4c47b	refs/heads/master



