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

/**
 * Testing Year's getSubTime functionality
*/
TEST(YearTest, SubTimeTest) {

    Year thirteen_thirty(1330);

    ASSERT_EQ(thirteen_thirty.getSubTime().size(), 0);
}