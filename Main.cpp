#include <iostream>
#include <string>
#include <vector>

#include "API.h"

void log(const std::string& text) {
    std::cerr << text << std::endl;
}


enum Direction { NORTH, EAST, SOUTH, WEST };

class Mouse {

    Direction dir;
    std::vector<int> pos;

    public:

    Mouse(Direction __d = NORTH) : dir{__d} {
        // std::cout << "Mouse created!" << std::endl;
        log("Mouse created!!");
    }

    void turnLeft() {
        // We want to change the direction
        log("Turning left!");
        API::turnLeft();

        switch (dir) {

            case NORTH:
                this->dir = WEST;
                break;

            case EAST:
                this->dir = NORTH;
                break;

            case SOUTH:
                this->dir = EAST;
                break;

            case WEST:
                this->dir = SOUTH;
                break;

        }
    }

    void turnRight() {
        // We want to change the direction
        log("Turning right!");
        API::turnRight();

        switch (dir) {

            case NORTH:
                this->dir = EAST;
                break;

            case EAST:
                this->dir = SOUTH;
                break;

            case SOUTH:
                this->dir = WEST;
                break;

            case WEST:
                this->dir = NORTH;
                break;

        // log("Now facing direction")

        }
    }

    void logDir() {

        switch (dir) {

            case NORTH:
                log("Heading North");
                break;

            case EAST:
                log("Heading East");
                break;

            case SOUTH:
                log("Heading South");
                break;

            case WEST:
                log("Heading West");
                break;
        }
    }

    void step() {

        if (!API::wallLeft()) {
            turnLeft();
        }
        while (API::wallFront()) {
            turnRight();
        }
        API::moveForward();

        logDir();
    }

};

// namespace MMS {


//     void turnLeft(&Direction d)


// };

int main(int argc, char* argv[]) {


    std::vector<int> v;

    Mouse m{NORTH};

    log("This is our version of the code");
    log("Running...");
    API::setColor(0, 0, 'G');
    API::setText(0, 0, "abc");


    while (true) {
        m.step();
    }
}
