#include <iostream>
#include <string>

#include "Mouse.h"


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
