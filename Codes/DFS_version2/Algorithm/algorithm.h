/**
 * @class Algorithm
 * @author Markose Jacob (UID 117000269), Pradeep Gopal (116885027), Rohit Thakur (115803282), Srikumar Muralidharan (UID 116950572)
 * @date 15 May 2020
 * @file algorithm.h
 * @brief This class contains the algorithm to solve the maze.
 */
#pragma once
#include <array>
#include <stack>
#include <memory>
#include "../LandBasedRobot/landbasedrobot.h"
#include "../Maze/maze.h"
#include "../Direction/direction.h"


namespace fp {
    /**
  * @brief This class run the algorithm to solve the maze
  */
    class algorithm : public maze {
    public:

        //Methods
        /**
          * @brief Method to setup the Maze
          */
        void SetUp(); //Initializes the Micro mouse simulation with Perimeter, Start and Goal highlighted
        /**
        *@brief Method set all the elements(nodes) in the array as unvisited(set them as zero)
        */
        void ClearVisitedNodes(); //Initializes the Visited_Nodes array with bool zero
        /**
         * @brief Method to display the maze with visited and unvisited nodes
        */
        void PrintVisitedNodes(); //USed to print the Visited_Nodes array
        /**
        * @brief Method to display a number in the simulator logs
        *  @param num the number to be displayed in the simulator
        */
        void displayNumber(int num); //Function which is used to print numbers on the Simulator screen
        /**
        * @brief Method to print the stack which stores the computed path from the current node using dfs
        *  @param stack stack that stores the computed path
        */
        void PrintStack(std::stack <int> s); //Function used to Print the contents of the stack
        /**
        * @brief Method to print the content of  the stacks in the simulator log
        *  @param stack stack that stored the computed path
        */
        void PrintStackSimulator(std::stack<int> s) ;
        /**
        * @brief Method to highlight the color of the cells in the computed path
        *  @param stack stack that stores the computed path
        */
        void HighlightPath(std::stack<int> s); //Highlights the path in the maze from start to goal
        /**
        * @brief Method to remove the highlights from the cells of path with obstacle
        *  @param stack stack that stores the computed path
        */
        void ClearPath(std::stack<int> s); //Prints the Stack containing the path in the simulator
        /**
        * @brief Method to display a string in the simulator logs
        *  @param text the message to be displayed in the simulator
        */
        void log(const std::string& text); //Prints text in the simulator
        /**
        * @brief Method to traverse the robot to solve the Maze
        * @param robot is the object of a robot derived from landbasedrobot class
        */
        void Solve(std::shared_ptr<fp::landbasedrobot> robot); //Function to find the path from current location to the goal location
        /**
        * @brief Method to move the robot in the maze
        *  @param path the stack which stores the path to be moved to
        *  @param robot the robot which is to be moved to the path
        */
        void MoveRobot(std::stack<int> path, std::shared_ptr<fp::landbasedrobot> ptr); //Function to move the micro mouse robot in the MMS
        /**
        * @brief Method to check if the robot has reached the goal
        *  @param x the x coordinate of the robot's position
        *  @param y the y coordinate of the robot's position
        *  @return true/false whether the robot has reached the goal
        */
        static bool CheckGoal(int x, int y); //Function to check if the current location of the robot is the Goal
        /**
        * @brief Method to resolve coordinate's into the nth element in the maze
        *  @param x the x coordinate of the position to be resolved
        *  @param y the y coordinate of the position to be resolved
        *  @return coordinate the number to denote the position in the maze
         */
        int SetCoordinates(int x, int y); //Converts the x and y coordinates into a single integer
        /**
        * @brief Method to resolve the nth element of the matrix into respective x,y coordinates
        *  @param coordinates the nth element of the maze matrix
        *  @return an array of 2 int representing the x and y coordinates
        */
        std::array<int, 2> GetCoordinates(int coordinates); //Function to the get the x and y coordinates
        /**
        * @brief Method to empty the stack
        *  @param stack stack that stored the computed path
        */
        std::stack<int> ClearStack(std::stack <int> stack);  //Empties the Stack and returns the emptied stack
        /**
        * @brief Method to reverse the members of the stack from top to bottom
        *  @param stack stack that stores the computed path
        */
        std::stack<int> ReverseStack(std::stack <int> stack); //Returns the reversed Stack
        /**
        *@brief Method set all the elements(nodes) in the array as unvisited(set them as zero)
        */
        void ClearVisitedArray(); //Initializes the Visited_Array array with bool zero

        // Constructor for the Algorithm class
        algorithm()
        {
            width = 0;
            height = 0;
            dir = 'n';
            direc = 'w';
            x = 0;
            y = 0;
            m = 0;
            n = 0;
            Start = 0;
        }

        //Attributes
        /**
         * @brief Declaring attributes for algorithm class
         * @param width Stores the width of the maze
         * @param height Stores the height of the maze
         * @param dir Stores the direction the robot is facing inside the maze
         * @param direc Temporary variable to store the direction
         * @param x Stores the current y coordinate of the robot in the maze
         * @param m Stores the future x coordinate of the robot in the maze
         * @param n Stores the future y coordinate of the robot in the maze
         * @param coordinate Stores the transformed x,y coordinate
         * @param p Stores the temporary coordinate
         * @param Start Variable to store the start coordinate for the solve fucntion method
         * @param NewCoordinate Variable used to store the popped off value from stack
         * @param point Stores the x and y coordinate
         * @param VisitedNodes Boolean array that keeps track of x and y coordinates visited by the robot while planning
         * @param Stack Used to store the path from current node to the goal node
         * @param temp Used to store the temporary path from current node to the goal node
         * @param VisitedArray Boolean array that keeps track of x and y coordinates visited by the robot while planning
         * @param Solution Used to store the path from current node to the goal node while the robot moves
         */
        int width; //Stores the width of the maze
        int height; //Stores the height of the maze
        char dir; //Stores the direction the robot is facing inside the maze
        char direc; //Temporary variable to store the direction
        int x; // Stores the current x coordinate of the robot in the maze
        int y; //Stores the current y coordinate of the robot in the maze
        int coordinate; //Stores the coordinate containing both x and y
        int Start; //Variable to store the start coordinate for the solve fucntion method
        int m; //Stores the future x coordinate of the robot in the maze
        int n; //Stores the future y coordinate of the robot in the maze
        int p; //Temp coordinate variable
        int NewCoordinate; //Variable used to store the popped off value from stack
        std::array<std::array<int, 16>, 16> VisitedNodes; //Boolean array that keeps track of x and y coordinates visited by the robot while planning
        std::stack<int> Stack; //Used to store the path from current node to the goal node
        std::stack<int> Solution; //Stores the Final path from start to goal node
        std::stack <int> temp; //Temporary stack used when stack size is 1
        std::array<std::array<int, 16>, 16> VisitedArray; //Boolean array that keeps track of x and y coordinates visited by the robot while moving through maze
        std::array <int,2> point; //Stores the x and y coordinate

        // Destructor for the Algorithm class
        ~algorithm(){}
    };
}


