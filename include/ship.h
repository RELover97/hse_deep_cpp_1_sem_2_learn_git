#pragma once

#include <iostream>

struct Ship {
    Ship() {
        std::cout << "Ship created\n";
    }

    void Fight() {}

    ~Ship() {
        std::cout << "Ship destroyed\n";
    }
};