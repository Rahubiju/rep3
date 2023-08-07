#include <gtest/gtest.h>

// Function to test
int add(int a, int b) {
    return a + b;
}

// Test case
TEST(AddTest, SimpleTest) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-2, 3), 1);
    EXPECT_EQ(add(0, 0), 0);
}

// Main function
int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

