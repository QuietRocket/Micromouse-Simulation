#include "Mouse.h

void Mouse::turnLeft()
{
    // We want to change the direction
    log("Turning left!");
    API::turnLeft();

    switch (dir)
    {

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

void Mouse::turnRight()
{
    // We want to change the direction
    log("Turning right!");
    API::turnRight();

    switch (dir)
    {

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

void Mouse::logDir()
{

    switch (dir)
    {

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