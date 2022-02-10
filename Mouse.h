#pragma once

#include <iostream>
#include <vector>
#include "API.h"

enum Direction { NORTH, EAST, SOUTH, WEST };

void log(const std::string& text);

class Mouse {
    Direction dir;
    std::vector<int> pos;

    public:

    Mouse(Direction __d = NORTH) : dir{__d} {
        // std::cout << "Mouse created!" << std::endl;
        log("Mouse created!!");
    }

    void turnLeft();

    void turnRight();

    void logDir();

    void step();
};