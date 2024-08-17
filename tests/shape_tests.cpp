// from this project
#include "shape.h"

// from standard library
#include <iostream>

// from google test
#include <gtest/gtest.h>

namespace ShapeTesting
{
bool ConstructorTest()
{
    const int sides = 3;
    const Geometry::Shape s = Geometry::Shape(sides);
    const bool result = s.GetSideCount() == sides;

    return result;
}

bool EqualAssignmentOperatorTest()
{
    const int sides = 3;
    const Geometry::Shape s1 = Geometry::Shape(sides);
    const Geometry::Shape s2 = s1;

    // verify that data was copied and also that the copy is stored at a different address
    const bool result = s2.GetSideCount() == s1.GetSideCount() && &s2 != &s1;

    return result;
}
}

// GOOGLE TESTS

TEST(shape_tests,constructor_test)
{
    EXPECT_TRUE(ShapeTesting::ConstructorTest());
}

TEST(shape_tests,equal_assignment_test)
{
    EXPECT_TRUE(ShapeTesting::EqualAssignmentOperatorTest());
}
