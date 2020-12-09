#pragma once
#include <string>
namespace fp{
/**
  * @brief Class to communicate with the Micromouse simulator
 */
    class API{
    public:
        /**
 * @brief Method to get the width of the maze
 * @return Width of the maze
*/
        static int mazeWidth();
        /**
 * @brief Method to get the height of the maze
 * @return Height of the maze
*/
        static int mazeHeight();
        /**
 * @brief Method to check if wall exists in front of the robot
 * @return True if yes, else false
*/
        static bool wallFront();
        /**
        * @brief Method to check if wall exists to the right of the robot
        * @return True if yes, else false
       */
        static bool wallRight();
        /**
 * @brief Method to check if wall exists to the left of the robot
 * @return True if yes, else false
*/
        static bool wallLeft();
        /**
 * @brief Moves the robot forward by one cell
 */
        static void moveForward();
        /**
 * @brief Turns the robot 90 degrees to the right
*/
        static void turnRight();
        /**
 * @brief Turns the robot 90 degrees to the left
 */
        static void turnLeft();
        /**
 * @brief highlights the wall at the given position
 * @param x X co-ordinate of the cell
 * @param y Y co-ordinate of the cell
 * @param direction Direction of the wall (n, e, s or w)
 */
        static void setWall(int x, int y, char direction);
        /**
        * @brief remove the highlight from the wall at the given position
        * @param x X co-ordinate of the cell
        * @param y Y co-ordinate of the cell
        * @param direction Direction of the wall (n, e, s or w)
       */
        static void clearWall(int x, int y, char direction);
        /**
 * @brief Sets color of the cell at the given position
 * @param x X co-ordinate of the cell
 * @param y Y co-ordinate of the cell
 * @param color Character of the desired color
*/
        static void setColor(int x, int y, char color);
        /**
 * @brief Clears the color of the cell at the given position
 * @param x X co-ordinate of the cell
 * @param y Y co-ordinate of the cell
*/
        static void clearColor(int x, int y);
        /**
       * @brief Clears color of all the cells
      */
        static void clearAllColor();
        /**
 * @brief Sets text of the cell at the given position
 * @param x X co-ordinate of the cell
 * @param y Y co-ordinate of the cell
 * @param text Desired text
*/
        static void setText(int x, int y, const std::string& text);
/**
 * @brief Clears text of the cell at the given position
 * @param x X co-ordinate of the cell
 * @param y Y co-ordinate of the cell
*/
        static void clearText(int x, int y);
/**
 * @brief Clears text of all the cells
*/
        static void clearAllText();
/**
 * @brief Method to check if the reset button was pressed
 * @return True if reset button was pressed, else false
*/
        static bool wasReset();
/**
 * @brief Method to allow the robot to be moved back to the start of the maze
*/
        static void ackReset();
    };//--class API
}//--namespace fp