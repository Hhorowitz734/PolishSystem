#include "gtest/gtest.h"
#include "../include/Settings.h"

class SettingsTest : public ::testing::Test {
protected:
    Settings& settings = Settings::GetInstance();
};

TEST_F(SettingsTest, CheckGetters) {
    
    /*
    Before freaking out and checking settings,
    ensure that the problem is not with the 
    settings being changed in Settings.h without
    being updated here
    */

   ASSERT_EQ(settings.getWidth(), 1000);
   ASSERT_EQ(settings.getHeight(), 600);
}