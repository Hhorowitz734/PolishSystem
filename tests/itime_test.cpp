#include "gtest/gtest.h"
#include "../include/ITime.h"
#include "../include/century.h"
#include "../include/decade.h"
#include "../include/year.h"
#include <vector>

class ITimeTest : public ::testing::Test {
protected:

};

TEST_F(ITimeTest, CheckGetParent) {

    // Century constructor should set up all the parent elements for years
    Century* y2k = new Century(2000); 

    std::vector<Decade*> decades = y2k->getDecades();

    ASSERT_EQ(y2k->getParent(), nullptr);

    // We need to ensure each element in decades's parent pointer points to the century that created it
    for (Decade* decade : decades) {
        ASSERT_EQ(decade->getParent(), y2k);
        ASSERT_NE(decade->getParent(), nullptr);

        for (Year* year : decade->getYears()) {
            ASSERT_EQ(year->getParent(), decade);
            ASSERT_NE(year->getParent(), nullptr);
        }
    }
}