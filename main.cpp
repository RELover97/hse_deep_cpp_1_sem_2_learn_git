#include <iostream>
#include <unistd.h> // getpid()

struct Cell {
    int x;
    int y;
};

int main() 
{
    std::cout << "Battleship!\n";

    Cell cell{1, 2}; // in stack

    Cell* other = new Cell{3, 4}; // in heap

    std::cout << &cell << '\n'; // address of cell

    std::cout << "PID: "
              << getpid() << '\n';  // process ID (= program ID in Linux)

    std::cin.get(); // waiting for one character from command line input

    return 0;
}