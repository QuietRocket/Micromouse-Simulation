#pragma once

#include <iostream>
#include <vector>
#include "API.h"

enum Direction { NORTH, EAST, SOUTH, WEST };

void log(const std::string& text);

class Mouse {
    Direction dir;

    public:

    Mouse(Direction __d = NORTH) : dir{__d} {
        log("Mouse created!!");
    }

    void turnLeft();

    void turnRight();

    void logDir();

    void step();
};