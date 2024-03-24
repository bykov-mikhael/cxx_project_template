#include <gtest/gtest.h>

#include <static-lib/static.h>

TEST(GetBool, getBool) {
  int val1{1};
  int val2{2};
  ASSERT_TRUE(examples::getBool(val1, val2));
}

TEST(GetInt, incorrect_visa) {
  int val1{1};
  int val2{2};
  ASSERT_EQ(examples::getInt(val1, val2), 1);
}
