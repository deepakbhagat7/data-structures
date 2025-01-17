#include <iostream>
#include <string>

#include "SolveMaze.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <maze file>" << std::endl;
        return 1;
    }

    SolveMaze solver(argv[1]);

    // Print the maze before solving it
    std::cout << "Maze before solving: " << std::endl << std::endl;
    solver.printMaze();

    // Use the solver object to solve the maze
    solver.solve();

    // Print the maze after solving it
    std::cout << "Maze after solving: " << std::endl << std::endl;
    solver.printMaze();

    return 0;
}