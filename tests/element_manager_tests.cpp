// from this project
#include "element_manager.h"

// from standard library
#include <iostream>

// from google test
#include <gtest/gtest.h>
#include <gmock/gmock.h>

// from spdlog
#include <spdlog/spdlog.h>

using namespace ElementManagementSystem;

namespace ElementManagerTesting
{
class ElementManagerTest : public ::testing::Test
{
protected:
    void SetUp() override
    {

    }

    void TearDown() override
    {

    }
};
}

using namespace ElementManagerTesting;

TEST_F(ElementManagerTest, ManageElementsTest)
{
    ElementManager manager;
    ASSERT_NO_FATAL_FAILURE(manager.ManageElements());
}
