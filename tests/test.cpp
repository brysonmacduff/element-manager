#include "shape.h"
#include <iostream>

bool ShapeTest1()
{
    int sides = 3;
    Geometry::Shape s = Geometry::Shape(sides);
    bool result = s.GetSideCount() == sides;
    if(result)
    {
        std::cout << "test/ShapeTest1() -> PASS\n";
    }else
    {
        std::cout << "test/ShapeTest1() -> FAIL\n";
    }   

    return result;
}

int main()
{
    std::cout << "tests/main() -> Hello!\n";
    ShapeTest1();
    return 0;
}