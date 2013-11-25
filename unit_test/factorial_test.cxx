
#include <gtest/gtest.h>
#include <test.h>

TEST(FactorialTest, HandleZeroInput)
{
  EXPECT_EQ(1, factorial(0));
}
