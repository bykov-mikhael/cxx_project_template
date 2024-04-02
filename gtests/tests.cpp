#include <gtest/gtest.h>

#include <static-lib/static.h>

TEST(GetBool, retBoolResult) {
  int val1{1};
  int val2{2};
  ASSERT_TRUE(examples::getBool(val1, val2));
}

TEST(GetInt, retIntResult) {
  int val1{1};
  int val2{2};
  ASSERT_EQ(examples::getInt(val1, val2), 1);
}
