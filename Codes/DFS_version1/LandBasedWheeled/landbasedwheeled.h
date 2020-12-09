/**
 * @class LandBasedWheeled
 * @author Markose Jacob (UID 117000269), Pradeep Gopal (116885027), Rohit Thakur (115803282), Srikumar Muralidharan (UID 116950572)
 * @date 13 May 2020
 * @file landbasedwheeled.h
 * @brief This is a concrete derived class from LandBasedRobot and contains the required methods, constructors, destructors and attributes
 */
#pragma once
#include <string>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"
#include "../LandBasedRobot/landbasedrobot.h"
#include <iostream>


namespace fp {
    /**
 * @brief Concrete class implementing the land based robot with wheels that derived from the landbasedrobot
 *
 */
    class landbasedwheeled : public landbasedrobot {
    public:
        //--method prototypes
        /**
   * @brief method to traverse the robot north
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoUp(int x_, int y_) override;  //Move the robot up in the maze
/**
   * @brief method to traverse the robot south
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoDown(int x_, int y_) override;  //Move the robot down in the maze
        /**
   * @brief method to traverse the robot west
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoLeft(int x_, int y_) override;  //Move the robot left in the maze
        /**
   * @brief method to traverse the robot east
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoRight(int x_, int y_) override;  //Move the robot right in the maze
        /**
   * @brief method to pick up an object
   * @param pick the name of the object to be picked
   * */
        virtual void PickUp(std::string& pick) override;  //Arm picks up an object
        /**
   * @brief method to release the object
   * @param pick the name of the object to be released
   * */
        virtual void Release(std::string& release) override;  //Arm releases an object
/**
   * @brief method to get x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
        virtual int get_x() const override;//--get the x coordinate of a robot
        /**
    * @brief method to get_y coordinate of the robot
    * @return y_ the y coordinate of the robot
    * */
        virtual int get_y() const override;//--get the y coordinate of a robot
        /**
    * @brief method to get direction the robot is facing
    * @return directions_ the  direction the robot is facing
    * */
        virtual char get_direction() const override ;//--get the current direction of the robot
        /**
   * @brief method to set x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
        virtual void set_x(int x) override; //--set the x coordinate of a robot
        /**
   * @brief method to set y coordinate of the robot
   * @return y_ the x coordinate of the robot
   * */
        virtual void set_y(int y) override ; //--set the y coordinate of a robot

        /**
    * @brief Deep copy Constructor to copy all attributes
    * @param source the reference of the object
    */
        // Deep copy constructor
        landbasedwheeled(const landbasedwheeled &source):landbasedwheeled(
                source.name_,
                source.x_,
                source.y_,
                source.speed_,
                source.width_,
                source.length_,
                source.height_,
                source.capacity_,
                source.directions_,
                source.wheel_number,
                *source.wheel_type
                ){}
/**
* @brief Constructor to set all the robot attributes
* @param name The name of the land based wheeled robot
* @param x The x value of the land based wheeled robot
* @param y The y value of the land based wheeled robot
* @param speed the speed of the land based wheeled robot
* @param width the width of the land based wheeled robot
* @param length the length of the land based wheeled robot
* @param height the height of the land based wheeled robot
* @param capacity the capacity of the land based wheeled robot
* @param directions the direction the land based wheeled robot is facing
*@param w_type the track type of the land based wheeled robot
* @param w_number the number of wheels of the land based wheleed robot
*/

        //--Constructor
        landbasedwheeled(std::string name="None", int x=0, int y=0, double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, char directions = 'N', int w_number=2, std::string w_type="round") : landbasedrobot(name, x, y, speed, width, length, height, capacity, directions), wheel_number{w_number},wheel_type{nullptr} {
            std::shared_ptr<std::string> wheel_type {new std::string {w_type}};
        }

        /**
        * @brief Destructor for the derived concrete class landbasedwheeled
        */
         //--Destructor
        virtual ~landbasedwheeled(){
        }

    protected:
        // --attributes
        int wheel_number;  //Number of wheels mounted on the robot
        std::shared_ptr<std::string> wheel_type;  //Type of wheels mounted on the robot.
    };//--class landbasedwheeled
}//--namespace fp

