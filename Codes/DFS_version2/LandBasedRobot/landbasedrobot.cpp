#include <iostream>
#include "landbasedrobot.h"


/**
   * @brief method to traverse the robot north
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedrobot::GoUp(int x, int y) {
std::cout <<"landbasedrobot::GoUp is called\n" <<std::endl;
y_ = y_ + 1;
}


/**
   * @brief method to traverse the robot south
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedrobot::GoDown(int x, int y) {
std::cout <<"landbasedrobot::GoDown is called\n" <<std::endl;
y_ = y_ - 1;
}


/**
   * @brief method to traverse the robot west
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedrobot::GoLeft(int x, int y) {
std::cout <<"landbasedrobot::TurnLeft is called\n" <<std::endl;
x_ = x_ - 1;
}

/**
   * @brief method to traverse the robot east
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedrobot::GoRight(int x, int y) {
std::cout <<"landbasedrobot::TurnRight is called\n" <<std::endl;
x_ = x_ + 1;
}


/**
   * @brief method to pick up an object
   * @param pick the name of the object to be picked
   * */
void fp::landbasedrobot::PickUp(std::string& pick) {
std::cout <<"landbasedrobot::Pickup is called\n" <<std::endl;
}

/**
   * @brief method to release the object
   * @param pick the name of the object to be released
   * */
void fp::landbasedrobot::Release(std::string& release) {
std::cout <<"landbasedrobot::Release is called\n" <<std::endl;
}


/**
   * @brief method to get x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
//--accessors
int fp::landbasedrobot::get_x() const {
return x_;
}

/**
   * @brief method to get_y coordinate of the robot
   * @return y_ the y coordinate of the robot
   * */
int fp::landbasedrobot::get_y() const{
return y_;
}

/**
   * @brief method to get direction the robot is facing
   * @return directions_ the  direction the robot is facing
   * */
char fp::landbasedrobot::get_direction() const{
return directions_;
}

/**
   * @brief method to set x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */

void fp::landbasedrobot::set_x(int x) {
x_ = x;
}
/**
   * @brief method to set y coordinate of the robot
   * @return y_ the x coordinate of the robot
   * */
void fp::landbasedrobot::set_y(int y) {
y_ = y;
}
