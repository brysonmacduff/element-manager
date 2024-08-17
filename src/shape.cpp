// cpp-template headers
#include "shape.h"

// standard library headers
#include <iostream>

using namespace Geometry;

Shape::Shape(const int& side_count)
{
    this->side_count = side_count;
}

Shape::Shape(const Shape& shape)
{
    this->side_count = shape.side_count;
}

const int& Shape::GetSideCount() const
{
    return side_count;
}

Shape& Shape::operator=(const Shape& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }

    side_count = rhs.side_count;
    return *this;
}
