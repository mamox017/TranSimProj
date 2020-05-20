#ifndef LAB03_POINT2_CLASSES_H_
#define LAB03_POINT2_CLASSES_H_
#include <iostream>

class Point2 {
  public:
		Point2(float x=0, float y=0);
		int Quadrant(); //int*?
		void Print();
		float DistanceBetween(Point2 p2);
		//getters
		float get_x(){return xcoord;};
		float get_y(){return ycoord;};
  private:
		float xcoord, ycoord;
  };

#endif /* LAB03_POINT2_CLASSES_H_ */
