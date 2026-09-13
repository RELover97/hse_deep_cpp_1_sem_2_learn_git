#include <iostream>
#include <unistd.h> // getpid()

#include "board.h"

void check_alignment()
{
    std::cout << sizeof(Cell) << std::endl;
    // добавим перед полем x поле char state;
    std::cout << sizeof(Cell) << std::endl;
    std::cout << alignof(Cell) << std::endl;
}


int main() 
{
    std::cout << "Battleship!\n";

    Cell cell{1, 2}; // in stack

    Cell* other = new Cell{3, 4}; // in heap

    std::cout << &cell << '\n'; // address of cell

    std::cout << "PID: "
              << getpid() << '\n';  // process ID (= program ID in Linux)

    std::cin.get(); // waiting for one character from command line input

    check_alignment();

    Board board;
    board.print();

    // debug_print();

    return 0;
}