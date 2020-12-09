
#include <iostream>
#include "landbasedwheeled.h"
/**
   * @brief method to traverse the robot north
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */

void fp::landbasedwheeled::GoUp(int x, int y) {
    std::cout <<"landbasedwheeled::GoUp is called\n";
    y_ = y_ + 1;
}
/**
   * @brief method to traverse the robot south
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */

void fp::landbasedwheeled::GoDown(int x, int y) {
    std::cout <<"landbasedwheeled::GoDown is called\n";
    y_ = y_ - 1;
}
/**
   * @brief method to traverse the robot west
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */

void fp::landbasedwheeled::GoLeft(int x, int y) {
    std::cout <<"landbasedwheeled::TurnLeft is called\n";
    x_ = x_ - 1;
}
/**
   * @brief method to traverse the robot east
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedwheeled::GoRight(int x, int y) {
    std::cout <<"landbasedwheeled::TurnRight is called\n";
    x_ = x_ + 1;
}
/**
   * @brief method to pick up an object
   * @param pick the name of the object to be picked
   * */
void fp::landbasedwheeled::PickUp(std::string &pick) {
    std::cout <<"landbasedwheeled::Pickup is called\n";
}
/**
   * @brief method to release the object
   * @param pick the name of the object to be released
   * */
void fp::landbasedwheeled::Release(std::string &release) {
    std::cout <<"landbasedwheeled::Release is called\n";
}
/**
   * @brief method to get x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
int fp::landbasedwheeled::get_x() const {
    return x_;
}
/**
   * @brief method to get_y coordinate of the robot
   * @return y_ the y coordinate of the robot
   * */
int fp::landbasedwheeled::get_y() const {
    return y_;
}
/**
   * @brief method to get direction the robot is facing
   * @return directions_ the  direction the robot is facing
   * */
char fp::landbasedwheeled::get_direction() const{
    return directions_;
}
/**
   * @brief method to set x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */

void fp::landbasedwheeled::set_x(int x) {
    x_ = x;
}
/**
   * @brief method to set y coordinate of the robot
   * @return y_ the x coordinate of the robot
   * */
void fp::landbasedwheeled::set_y(int y) {
    y_ = y;
}

