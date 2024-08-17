// from google test
#include <gtest/gtest.h>

namespace MiscTesting
{

bool PassTest()
{
    return true;
}

}

TEST(misc_tests,google_test_test)
{
    ASSERT_TRUE(MiscTesting::PassTest());
}