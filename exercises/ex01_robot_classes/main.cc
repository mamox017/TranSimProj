#include <iostream>
#include "robot.h"

int main() {
  Robot rosy_robot;
  rosy_robot.set_position(0,0);
  rosy_robot.set_direction_angle_rad(0);
  rosy_robot.Display();
}
