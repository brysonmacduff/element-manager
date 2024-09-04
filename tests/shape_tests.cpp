// from this project
#include "shape.h"

// from standard library
#include <iostream>

// from google test
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace ShapeTesting
{   
class MockShape : public Geometry::Shape
{
public:
    MOCK_METHOD(int, GetSideCount,());
};
    
}

// GOOGLE TESTS

TEST(shape_tests,constructor_test)
{
    const int sides = 3;
    ASSERT_NO_FATAL_FAILURE(Geometry::Shape s = Geometry::Shape(sides));
}

TEST(shape_tests,mock_get_side_count)
{
    ShapeTesting::MockShape mock_shape = ShapeTesting::MockShape(3);
    EXPECT_CALL(mock_shape,GetSideCount()).Times(1).WillOnce(testing::Return(3));

    int sides = mock_shape.GetSideCount();
    ASSERT_EQ(sides,3);
}

TEST(shape_tests,equal_assignment_test)
{   
    const int sides = 3;
    const Geometry::Shape s1 = Geometry::Shape(sides);
    const Geometry::Shape s2 = s1;

    // verify that data was copied and also that the copy is stored at a different address
    const bool result = s2.GetSideCount() == s1.GetSideCount() && &s2 != &s1;

    EXPECT_TRUE(result);
}
