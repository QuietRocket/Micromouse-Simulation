#include <iostream>
#include <string>

#include "Mouse.h"

int main(int argc, char *argv[])
{
    Mouse m { NORTH };

    log("Running...");

    while (true)
    {
        m.step();
    }
}
