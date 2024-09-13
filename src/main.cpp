#include "shape.h"
#include <iostream>

int main()
{
    std::cout << "src/main() -> Hello!\n";
    Geometry::Shape s = Geometry::Shape(3);
    std::cout << "src/main() -> " << s << "\n";
    return 0;
}