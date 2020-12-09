/**
 * @class LandBasedTracked
 * @author Markose Jacob (UID 117000269), Pradeep Gopal (116885027), Rohit Thakur (115803282), Srikumar Muralidharan (UID 116950572)
 * @date 13 May 2020
 * @file landbasedtracked.h
 * @brief This is a concrete derived class from LandBasedRobot and contains the required methods, constructors, destructors and attributes
 */
#pragma once
#include <string>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"

namespace fp {
/**
 * @brief Concrete class implementing the land based robot with tracks that derived from the landbasedrobot
 *
 */
    class landbasedtracked : public landbasedrobot {
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
        virtual void Release(std::string& release) override;  //Arm releases an object.
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




        // Deep copy constructor
        /**
    * @brief Deep copy Constructor to copy all object attributes
    * @param source the reference of the object
    */

        landbasedtracked(const landbasedtracked &source):landbasedtracked(
                source.name_,
                source.x_,
                source.y_,
                source.speed_,
                source.width_,
                source.length_,
                source.height_,
                source.capacity_,
                source.directions_,
                *source.track_type){}

/**
* @brief Constructor to set all the robot attributes
* @param name The name of the land based tracked robot
* @param x The x value of the land based tracked robot
* @param y The y value of the land based tracked robot
* @param speed the speed of the land based tracked robot
* @param width the width of the land based tracked robot
* @param length the length of the land based tracked robot
* @param height the height of the land based tracked robot
* @param capacity the capacity of the land based tracked robot
* @param directions the direction the land based tracked robot is facing
*@param t_type the track type of the land based robot
*/
        //--Constructor
        landbasedtracked(std::string name="None", int x=0, int y=0, double speed = 0, double width = 0, double length = 0, double height = 0, double capacity = 0, char directions = 'N', std::string t_type="flat") : landbasedrobot(name, x, y, speed, width, length, height, capacity, directions), track_type{nullptr} {
            std::shared_ptr<std::string> track_type {new std::string {t_type}};
        }

        /**
          * @brief Destructor for the derived concrete class landbasedtracked
          */
        //--Destructor
        virtual ~landbasedtracked(){}
    protected:
        // --attributes
        std::shared_ptr<std::string> track_type;  //Type of track mounted on the robot.

    };//--class landbasedtracked
}//--namespace fp

