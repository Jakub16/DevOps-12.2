#include <gtest/gtest.h>

int sum(int a, int b);

TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(sum(1, 2), 3);
    EXPECT_EQ(sum(10, 20), 30);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(sum(-1, -2), -3);
    EXPECT_EQ(sum(-10, -20), -30);
}

TEST(SumTest, MixedNumbers) {
    EXPECT_EQ(sum(-1, 1), 0);
    EXPECT_EQ(sum(-10, 20), 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
