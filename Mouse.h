#pragma once

enum Direction { NORTH, EAST, SOUTH, WEST };

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