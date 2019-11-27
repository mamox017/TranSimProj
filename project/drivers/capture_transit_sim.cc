#include <ctime>
#include <iostream>
#include <random>
#include <fstream>
#include "local_simulator.h"

int main(int argc, char * argv[]) {
    
  int rounds = 30; //Number of rounds of generation to simulate in test
  std::ofstream myFilePtr;
  if (argc > 1) {
  	myFilePtr.open(argv[1]);
	srand((long)time(NULL)); //Seed the random number generator...
	  
	LocalSimulator my_sim;
	  
	if (myFilePtr.is_open()) {
		  myFilePtr << "/*************************" << std::endl << std::endl;
		  myFilePtr << "         STARTING" << std::endl;
		  myFilePtr << "        SIMULATION" << std::endl;
		  myFilePtr << "*************************/" << std::endl;
		  
		  my_sim.Start(myFilePtr);
		  
		  myFilePtr << "/*************************" << std::endl << std::endl;
		  myFilePtr << "           BEGIN" << std::endl;
		  myFilePtr << "          UPDATING" << std::endl;
		  myFilePtr << "*************************/" << std::endl;
		  
		  for (int i = 0; i < rounds; i++) {
			  my_sim.Update(myFilePtr);
		  }
		  
		  myFilePtr << "/*************************" << std::endl << std::endl;
		  myFilePtr << "        SIMULATION" << std::endl;
		  myFilePtr << "         COMPLETE" << std::endl;
		  myFilePtr << "*************************/" << std::endl;
	  }
  }

  return 0;
}