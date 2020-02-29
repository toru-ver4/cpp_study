#include "all.h"

int main()
{
    auto plus = []( auto x, auto y ){
        std::cout << x + y << "\n"s;
    };
    plus(3, 4);
}
