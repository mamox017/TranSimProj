### Release Notes on Refactorings
The branches in which both refactorings have been completed is refactor/iter3.

### Refactoring 1
The refactoring completed for this requirement was done in the file, random_passenger_generator.cc.
The addition to the code were two lines that popped the final stop probability off of the list that
it was on and pushed on a probability of 0.  This insures that each route has a zero probability of
generating passengers on the last stop.  NEED TO ADD ON REFACTORING SO THAT SIM DOESNT TRY TO USE/ACCESS

### Location
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
