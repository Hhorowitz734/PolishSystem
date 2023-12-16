#include "gtest/gtest.h"
#include "../include/year.h"
#include <vector>

class YearTest : public ::testing::Test {
protected:

};

TEST(YearTest, YearConstructor) {

    Year y2k(2000);

    ASSERT_EQ(y2k.getYear(), 2000);

}