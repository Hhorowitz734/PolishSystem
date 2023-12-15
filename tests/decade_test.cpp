#include "gtest/gtest.h"
#include "../include/year.h"
#include "../include/decade.h"
#include <vector>

class DecadeTest : public ::testing::Test {
protected:
    
};

TEST_F(DecadeTest, CenturyDecadeConstructors) {
    
    //Expected value of 90s years
    std::vector<int> expected_nineties = {
        1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999
    };

    Decade nineties(20, 90);

    for (int i = 0; i < 10; i++) {
        ASSERT_EQ(nineties.getYears()[i].getYear(), expected_nineties[i]);
    }
}