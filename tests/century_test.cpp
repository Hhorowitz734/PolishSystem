#include "gtest/gtest.h"
#include "../include/year.h"
#include "../include/decade.h"
#include "../include/century.h"
#include <vector>

class CenturyTest : public ::testing::Test {
protected:
    
};

/**
 * Testing Century's "century number" constructor
*/
TEST(CenturyTest, CenturyNumConstructor) {
    
    //Expected value of 19th century years
    std::vector<int> expected_years;
    for (int i = 1800; i < 1900; i++){
        expected_years.push_back(i);
    }
    

    Century nineteenth_century(19, true);

    for (int i = 0; i < 100; i++) {
        ASSERT_EQ(nineteenth_century.getYears()[i].getYear(), expected_years[i]);
    }
}

/**
 * Testing Century's start year constructor
*/
TEST(CenturyTest, StartYearConstructor) {

    //Expected value of 21st century years
    std::vector<int> expected_years;
    for (int i = 2000; i < 2100; i++) {
        expected_years.push_back(i);
    }

    Century twenty_first_century(2000);

    for (int i = 0; i < 100; i++){
        ASSERT_EQ(twenty_first_century.getYears()[i].getYear(), expected_years[i]);
    }
}

/**
 * Testing Century's getSubTime functionality
*/
TEST(CenturyTest, SubTimeTest) {

    //Expected value of 20th century years
    std::vector<int> expected_years;
    for (int i = 1900; i < 2000; i++) {
        expected_years.push_back(i);
    }

    Century twentieth_century(1900);

    std::vector<ITime*> decades = twentieth_century.getSubTime();

    std::vector<int> years_values;

    int j = 0;
    for (ITime* d : decades) {
        Decade* decade = static_cast<Decade*>(d);
        for (Year year: decade->getYears()) {
            ASSERT_EQ(year.getYear(), expected_years[j]);
            j++;
        }
    }
}