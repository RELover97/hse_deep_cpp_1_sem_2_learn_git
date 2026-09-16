#include <iostream>
#include <unistd.h> // getpid()

#include "board.h"
#include "ship.h"

void check_alignment()
{
    std::cout << sizeof(Cell) << std::endl;
    // добавим перед полем x поле char state;
    std::cout << sizeof(Cell) << std::endl;
    std::cout << alignof(Cell) << std::endl;
}

// dangling pointer
Ship* create_ship() {
    Ship ship;
    return &ship;
}

void check_lifetime()
{
    Ship ship;
    std::cout << "Hello here" << std::endl;

    // Ship *ship2 = create_ship(); 
    // ship2->Fight(); // undefined behaviour!
}


int main() 
{
    std::cout << "Battleship!\n";

    int x = 1;

    Cell cell{1, 2}; // in stack

    Cell* other = new Cell{3, 4}; // in heap

    x += 1;

    std::cout << &cell << '\n'; // address of cell

    std::cout << "PID: "
              << getpid() << '\n';  // process ID (= program ID in Linux)

    std::cin.get(); // waiting for one character from command line input

    check_alignment();

    Board board;
    board.print();

    // debug_print();

    x *= 2;

    check_lifetime();

    // std::cout << (x / 0) << std::endl;

    // out of bounds
    int a[] = {1, 2, 3};
    int b = a[5];

    return 0;
}