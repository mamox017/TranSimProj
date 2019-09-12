#ifndef LAB03_POINT2_CLASSES_H_
#define LAB03_POINT2_CLASSES_H_
#include <iostream>

class Point2 {
  public:
		Point2(int x=0, int y=0);
		int Quadrant(); //int*?
		void Print();
		float DistanceBetween(Point2 p2);
		//getters
		int get_x(){return xcoord;};
		int get_y(){return ycoord;};
  private:
		int xcoord, ycoord;
  };

#endif /* LAB03_POINT2_CLASSES_H_ */
