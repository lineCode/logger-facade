#include "logger.h"
#include "gtest/gtest.h"

TEST(TestLogger, DummyTest) {
  BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
  EXPECT_TRUE(true == true);
}
