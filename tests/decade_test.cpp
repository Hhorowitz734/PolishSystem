#include "gtest/gtest.h"
#include "../include/year.h"
#include "../include/decade.h"
#include <vector>

class DecadeTest : public ::testing::Test {
protected:

};

TEST(DecadeTest, CenturyDecadeConstructor) {

    //Create "nineties" sample decade object
    Decade nineties(20, 90);

    std::vector<int> expected_nineties = {1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999};

    std::vector<Year> nineties_years_vec = nineties.getYears();

    //Compares years of Year objects in Decade's years vector with expected value
    for (int i = 0; i < nineties_years_vec.size(); i++) {
        ASSERT_EQ(nineties_years_vec[i].getYear(), expected_nineties[i]);
    }

}

TEST(DecadeTest, CenturyStartYearConstructor) {
    
    //Create "eighties" sample decade object
    Decade eighties(1980);

    std::vector<int> expected_eighties = {1980, 1981, 1982, 1983, 1984, 1985, 1986, 1987, 1988, 1989};

    std::vector<Year> eighties_years_vec = eighties.getYears();

    //Compare values to ensure correctness
    for (int i = 0; i < eighties_years_vec.size(); i++) {
        ASSERT_EQ(eighties_years_vec[i].getYear(), expected_eighties[i]);
    }
    
}

/**
 * Testing Decade's getSubTime functionality
*/
TEST(DecadeTest, SubTimeTest) {

    //Expected value of 1450s years
    std::vector<int> expected_years = {1450, 1451, 1452, 1453, 1454, 1455, 1456, 1457, 1458, 1459};

    Decade fourteen_fifties(1450);

    std::vector<ITime*> years = fourteen_fifties.getSubTime();

    int j = 0;
    for (ITime* y : years) {
        Year* year = static_cast<Year*>(y);
        ASSERT_EQ(year->getYear(), expected_years[j]);
        j++;
    }
}