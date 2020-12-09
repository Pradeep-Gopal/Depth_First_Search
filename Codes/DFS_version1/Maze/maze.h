/**
 * @class Maze
 * @author Markose Jacob (UID 117000269), Pradeep Gopal (116885027), Rohit Thakur (115803282), Srikumar Muralidharan (UID 116950572)
 * @date 13 May 2020
 * @file maze.h
 * @brief This is a class to store the maze attributes
 */

#pragma once
#include <array>
/**
 * brief class to store the maze attributes
 */
namespace fp {
    class maze {


    public:
        //Method prototypes
        /**
* @brief method to initialize the wall information with zero
 *  @return an array of int initialized with zeroes
*/
        std::array<std::array<int, 256>, 256> InitializeMaze(); // Initializes the array with all values sent to 0
        /**
* @brief method to set wall between to cell
*  @param x the X coordinate in the maze
 *  @param y the Y coordinate in the maze
 *  @return an array of walls in the current cell
*/
        std::array<std::array<int, 256>, 256> SetWall(int x, int y); //Sets a coordinate to true, if there is a wall between two coordinates
        /**
* @brief Method to get the dimensions of the maze
*  @return an array denoting rows and columns of the maze
*/
        int GetDimension(); //Returns the dimension of the WallArray array
        /**
* @brief check whether there is a  wall between two cells
*  @param x the X coordinate of the cell in the maze
 *  @param y the Y coordinate of the cell in the maze
*/
        bool CheckWalls(int x, int y);  //Returns true if there is a wall between two coordinates
        /**
* @brief method to convert cooridnates into an unique integer denoting the cell
*  @param x the X coordinate of the cell in the maze
 *  @param y the Y coordinate of the cell in the maze
*/
        int SetCoordinates(int x, int y); //Sets WallArray index to true if there is a wall between two coordinates in the maze

        // Constructor for the maze class
        maze()
        {
            InitializeMaze(); // Initializes the array with all values sent to 0
        }

        // Attributes
/**
* @brief Constructor to set all the robot attributes
* @param coordinate Variable which stores the coordinate value of the current x and y value
* @param WallArray Array to store all the Wall information about the maze in MMS
 */
int coordinate{}; //Variable which stores the coordinate value of the current x and y value
std::array<std::array<int, 256>, 256> WallArray{}; // Array to store all the Wall information about the maze in MMS

// Destructor for the maze class
~maze(){}

};
}


