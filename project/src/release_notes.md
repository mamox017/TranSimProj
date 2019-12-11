### Release Notes on Refactorings
The branches in which both refactorings have been completed is refactor/iter3.

*Note* These refactorings are not in the master branch, only in the refactor/iter3 therefore
the line numbers referred to, in which the refactorings are done, are for the refactor/iter3 files.
You will not see the refactorings on the line numbers in the master branch.


### Refactoring 1
The refactoring completed for this requirement was done in the file, random_passenger_generator.cc.
The for loop in this file was modified so that the simulator does not try to access the probability
of generation on the last stop.  The condition in which the for loop terminates was changed so that
it will terminate before it iterates on the final stop.  In addition, added to the code, were two 
lines that popped the final stop probability off of the list that it was on and pushed on a probability
of 0.  This insures that each route has a zero probability of generating passengers on the last stop,
just incase.

### Location
Modified lines:
random_passenger_generator.cc, Line 55
```
  for (prob_iter = generation_probabilities_.begin(),
                          stop_iter = stops_.begin();
       prob_iter != generation_probabilities_.end()
                    && (*stop_iter)->GetId() != last_stop_index;    // this is the changed line
       prob_iter++, stop_iter++) {
```

Added lines:
random_passenger_generator.cc, Lines 40 & 41
```
generation_probabilities_.pop_back();
generation_probabilities_.push_back(0);
```

### Refactoring 2
This change was done using the Replace Temp with Query refactoring method.  It was done in the file,
bus.cc, in the UpdateBusData() function.  When the visual simulator accesses a bus's position in between stops, 
it needs to find the average distance between the two stops it is traveling between.  Originally in my code the
x and y positions were calculated in the initialization of two temporary variables.  I have replaced this with the
refactoring method stated above and created a function called AvgDistCalc(std::string lat_or_lon).
Now when the temporary variables are initialized in UpdateBusData(), they call this function with the argument of
a string that indicates whether the latitude or longitude is being calculated.

### Location
Replace Temp with Query (Function calls):
bus.cc, Lines 48, 49

Originally:
```
float x = static_cast<float>((currentStop->getLong()+
  followingStop->getLong())/2.0);
float y = static_cast<float>((currentStop->getLat()+
  followingStop->getLat())/2.0);
```

After Refactoring:
```
float x = AvgDistCalc("long");
float y = AvgDistCalc("lat");
```

AvgDistCalc Function:
bus.cc, Lines 65-79
```
float Bus::AvgDistCalc(std::string lat_or_lon) {
  // retrieves next stop
  Stop * followingStop = GetNextStop();
  // if we want to find avg dist between longitudes
  if  (lat_or_lon.compare("long") == 0) {
    return static_cast<float>((currentStop->getLong()+
    followingStop->getLong())/2.0);
  } else if (lat_or_lon.compare("lat") == 0) {
    // if we want to find avg dist between latitudes
    return static_cast<float>((currentStop->getLat()+
    followingStop->getLat())/2.0);
  } else {
    return 0;
  }
}
```
