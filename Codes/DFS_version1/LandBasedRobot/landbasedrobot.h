/**
 * @class LandBasedRobot
 * @author Markose Jacob (UID 117000269), Pradeep Gopal (116885027), Rohit Thakur (115803282), Srikumar Muralidharan (UID 116950572)
 * @date 13 May 2020
 * @file landbasedrobot.h
 * @brief This is the abstract base class for LandBasedTracked class and LandBasedWheeled class contains the required methods, constructors, destructors and attributes
 */

#pragma once

#include <string>

namespace fp {
    /**
 * @brief Abstract class for the land based robot
 */
    class landbasedrobot {

    public:
        //--method prototypes
        /**
   * @brief method to traverse the robot north
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoUp(int x_, int y_)=0;  //Move the robot up in the maze
        /**
   * @brief method to traverse the robot south
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoDown(int x_, int y_)=0;  //Move the robot down in the maze
        /**
   * @brief method to traverse the robot west
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoLeft(int x_, int y_)=0;  //Move the robot left in the maze
        /**
   * @brief method to traverse the robot east
   * @param x the x coordinate of the robot's postion
   * @param y the y coordinate of the robot's position
   * */
        virtual void GoRight(int x_, int y_)=0;  //Move the robot right in the maze
        /**
   * @brief method to pick up an object
   * @param pick the name of the object to be picked
   * */
        virtual void PickUp(std::string& pick)=0;  //Arm picks up an object
        /**
   * @brief method to release the object
   * @param pick the name of the object to be released
   * */
        virtual void Release(std::string& release)=0;  //Arm releases an object.
        /**
   * @brief method to get x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
//--accessors
        virtual int get_x() const=0;//--get the x coordinate of a robot
        /**
   * @brief method to get_y coordinate of the robot
   * @return y_ the y coordinate of the robot
   * */
        virtual int get_y() const=0;//--get the y coordinate of a robot
        /**
   * @brief method to get direction the robot is facing
   * @return directions_ the  direction the robot is facing
   * */
        virtual char get_direction() const=0;//--get the current direction of the robot
        /**
   * @brief method to set x coordinate of the robot
   * @return x_ the x coordinate of the robot
   * */
        virtual void set_x(int x)=0; //--set the x coordinate of a robot
        /**
   * @brief method to set y coordinate of the robot
   * @return y_ the x coordinate of the robot
   * */
        virtual void set_y(int y)=0; //--set the y coordinate of a robot


        /**
      * @brief Constructor to set all the robot attributes
      * @param name The name of the land based robot
      * @param x The x value of the land based robot
      * @param y The y value of the land based robot
      * @param speed the speed of the land based robot
      * @param width the width of the land based robot
      * @param length the length of the land based robot
      * @param height the height of the land based robot
      * @param capacity the capacity of the land based robot
      * @param directions the direction the land based robot is facing
      */
        //--Constructor
        landbasedrobot(std::string name="none", int x=0, int y=0, double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, char directions = 'N' ): name_{name}, x_{x}, y_{y}, speed_{speed}, width_{width}, length_{length}, height_{height}, capacity_{capacity}, directions_{directions}
        {};

        //-- destructor
        /**
   * @brief Destructor for the landbasedrobot class
   */
        virtual ~landbasedrobot(){}

    protected:
        //--attributes
        std::string name_;  //Name of the robot
        int x_;  //X coordinate of the robot in the maze
        int y_;  //Y coordinate of the robot in the maze
        double speed_;  //Driving speed of the robot
        double width_; //Width of the base of the robot
        double length_;  //Length of the base of the robot
        double height_;  //Height of the base of the robot
        double capacity_;  //Payload of the arm
        char directions_; //Direction the robot is facing

    };//--class landbasedrobot
}//--namespace fp


//what about the setters and getters for the base class?