//
// Created by prade on 4/22/2020.
//

#include <iostream>
#include "landbasedtracked.h"
/**
   * @brief method to traverse the robot north
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedtracked::GoUp(int x, int y) {
    std::cout <<"landbasedtracked::GoUp is called\n";
    y_ = y_ + 1;
}

/**
   * @brief method to traverse the robot south
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedtracked::GoDown(int x, int y) {
    std::cout <<"landbasedtracked::GoDown is called\n";
    y_ = y_ - 1;
}

/**
   * @brief method to traverse the robot west
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedtracked::GoLeft(int x, int y) {
    std::cout <<"landbasedtracked::TurnLeft is called\n";
    x_ = x_ - 1;
}

/**
   * @brief method to traverse the robot east
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
void fp::landbasedtracked::GoRight(int x, int y) {
    std::cout <<"landbasedtracked::TurnRight is called\n";
    x_ = x_ + 1;
}

/**
   * @brief method to pick up an object
   * @param pick the name of the object to be picked
   * */
void fp::landbasedtracked::PickUp(std::string &pick) {
    std::cout <<"landbasedtracked::PickUp is called\n";
}

/**
   * @brief method to release the object
   * @param pick the name of the object to be released
   * */
void fp::landbasedtracked::Release(std::string &release) {
    std::cout <<"landbasedtracked::Release is called\n";
}

/**
   * @brief method to get x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
int fp::landbasedtracked::get_x() const {
    return x_;
}

/**
   * @brief method to get_y coordinate of the robot
   * @return y_ the y coordinate of the robot
   * */
int fp::landbasedtracked::get_y() const {
    return y_;
}

/**
   * @brief method to get direction the robot is facing
   * @return directions_ the  direction the robot is facing
   * */
char fp::landbasedtracked::get_direction() const{
    return directions_;
}

/**
   * @brief method to set x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */

void fp::landbasedtracked::set_x(int x) {
    x_ = x;
}

/**
   * @brief method to set y coordinate of the robot
   * @return y_ the x coordinate of the robot
   * */
void fp::landbasedtracked::set_y(int y) {
    y_ = y;
}


