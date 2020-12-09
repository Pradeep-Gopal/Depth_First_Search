/**
 * @file main.cpp
 * @author Markose Jacob (UID 117000269), Pradeep Gopal (116885027), Rohit Thakur (115803282), Srikumar Muralidharan (UID 116950572)
 * @date 13 May 2020
 * @version 1.0
 * @section DISCRIPTION
 * To develop a maze solving program which creates a land based robot and finds a path from start to goal using depth first search.
 */

#include "LandBasedWheeled/landbasedwheeled.h"
#include "LandBasedTracked/landbasedtracked.h"
#include "LandBasedRobot/landbasedrobot.h"
#include "Algorithm/algorithm.h"
#include <vector>
#include <memory>
#include <iostream>


int main(){
    std::shared_ptr<fp::landbasedrobot> wheeled = std::make_shared<fp::landbasedwheeled>("Husky");


    fp::algorithm algo;
    algo.SetUp();
    algo.Solve(wheeled);


    return 0;
}
