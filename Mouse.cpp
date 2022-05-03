#include "Mouse.h"

void log(const std::string& text) {
    std::cerr << text << std::endl;
}

void Mouse::turnLeft()
{
    // We want to change the direction
    log("Turning left!");
    API::turnLeft();

    int current = this->dir;
    --current; // Decrement the value
    current = current < 0 ? 3 : current; // Wrap negative values
    current = current % 4; // Modulo
    this->dir = (Direction) current;
}

void Mouse::turnRight()
{
    // We want to change the direction
    log("Turning right!");
    API::turnRight();

    int current = this->dir;
    ++current; // Decrement the value
    current = current % 4; // Modulo
    this->dir = (Direction) current;
}

void Mouse::logDir()
{
    char directions[4][6] = {
        "North",
        "East",
        "South",
        "West"  
    };

    log(directions[dir]);
}

void Mouse::step()
{
    if (!API::wallLeft())
    {
        turnLeft();
    }

    while (API::wallFront())
    {
        turnRight();
    }
    
    API::moveForward();

    logDir();
}