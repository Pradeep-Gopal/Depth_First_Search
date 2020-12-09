//
// Created by prachu on 5/9/20.
//

#include <iostream>
#include "maze.h"
/**
* @brief Method to get the dimensions of the maze
*  @return an array denoting rows and columns of the maze
*/
int fp::maze::GetDimension() {
    std::cout<< "get dimensions called" << std::endl;
    int rows =  sizeof WallArray / sizeof WallArray[0];
    int cols = sizeof WallArray[0] / sizeof(int);
    return SetCoordinates(rows, cols);
}
/**
* @brief method to convert cooridnates into an unique integer denoting the cell
*  @param x the X coordinate of the cell in the maze
 *  @param y the Y coordinate of the cell in the maze
*/
int fp::maze::SetCoordinates(int x, int y) {
    coordinate = (x) + 256*y; // Transforming x and y value to a single coordinate
    return coordinate;
}
/**
* @brief check whether there is a  wall between two cells
*  @param x the X coordinate of the cell in the maze
 *  @param y the Y coordinate of the cell in the maze
*/
bool fp::maze::CheckWalls(int x, int y) {
    std::cout<< "check walls called" << std::endl;
    return WallArray[x][y] == 1; // Returns true if there is a wall between two indices in the maze
}
/**
* @brief method to set wall between to cell
*  @param x the X coordinate in the maze
 *  @param y the Y coordinate in the maze
 *  @return an array of walls in the current cell
*/
std::array<std::array<int, 256>, 256> fp::maze::SetWall(int x, int y) {
    std::cout << "SetWall called";
    WallArray[x][y] = 1; // Sets the index to one
    WallArray[y][x] = 1; // Sets the index to one
    return WallArray;
}

/**
* @brief method to initialize the wall information with zero
 *  @return an array of int initialized with zeroes
*/
std::array<std::array<int, 256>, 256> fp::maze::InitializeMaze() {
    std::cout << "Initialised wall array with all zeroes" <<std::endl;
    for (int i = 0; i < 255; i++)
    {
        for (int j = 0; j < 255; j++)
        {
            WallArray[i][j] = 0; // Initialising th array indices with zero
        }
    }
    return WallArray;
}


