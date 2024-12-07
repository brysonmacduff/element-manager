// from this project
#include "element_manager.h"

// from external
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ElementManagementSystem;

namespace ElementManagerTesting
{   

class ElementManagerTestFixture : public ::testing::Test
{
protected:
    // Setup code executed before each test
    void SetUp() override {
        // Initialize resources here
        spdlog::debug("ShapeTestFixture::SetUp()");
    }

    // Teardown code executed after each test
    void TearDown() override {
        // Clean up resources here
        spdlog::debug("ShapeTestFixture::TearDown()");
    }
};
}

using namespace ElementManagerTesting;

// GOOGLE TESTS

TEST_F(ElementManagerTestFixture,ManageElements)
{   
    ElementManager elem_mngr;
    ASSERT_NO_FATAL_FAILURE(elem_mngr.ManageElements());
}

