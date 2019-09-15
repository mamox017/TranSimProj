#include <cmath>
#include <iostream>

#include "point2.h"
using namespace std;

Point2::Point2(float x, float y){
	xcoord = x;
	ycoord = y;
}

int Point2::Quadrant(){
	//quadrants
	if (xcoord == 0 && ycoord == 0){
		return 0;
	}
	else if (xcoord >= 0 && ycoord < 0){
		return 4;
	}
	else if (xcoord < 0 && ycoord <= 0){
		return 3;
	}
	else if ((xcoord <= 0 && ycoord > 0)){
		return 2;
	}
	else {
		return 1;
	}
}

void Point2::Print(){
	cout << "Point: (" << xcoord << "," << ycoord << ")" << endl;
}

float Point2::DistanceBetween(Point2 p2){
	float a = p2.get_x() - this->get_x();
	float b = p2.get_y() - this->get_y();
	return sqrt(pow(a,2.0)+pow(b,2.0));
}
