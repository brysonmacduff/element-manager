#include "shape.h"

namespace Geometry
{
Shape::Shape(int sideCount)
{
    this->sideCount = sideCount;
}
int Shape::GetSideCount()
{
    return sideCount;
}
}