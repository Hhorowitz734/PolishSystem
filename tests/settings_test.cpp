#include "gtest/gtest.h"
#include "../include/Settings.h"

class SettingsTest : public ::testing::Test {
protected:
    Settings& settings = Settings::GetInstance();
};

TEST_F(SettingsTest, CheckWindowGetters) {
    
    /*

    !!! PLEASE READ BEFORE CHANGING THIS CODE !!!
    -------------------------------------------
    Before freaking out and checking settings,
    ensure that the problem is not with the 
    settings being changed in Settings.h without
    being updated here
    */

   ASSERT_EQ(settings.getWidth(), 1000);
   ASSERT_EQ(settings.getHeight(), 600);
}

TEST_F(SettingsTest, CheckCenturyGetters) {

    ASSERT_EQ(settings.getCenturyWidth(), settings.getHeight() - 200);
    ASSERT_EQ(settings.getCenturyHeight(), settings.getHeight() - 200);

    ASSERT_EQ(settings.getCenturyX(), (settings.getWidth() - settings.getHeight() + 200) / 2);
    ASSERT_EQ(settings.getCenturyY(), 100);
}

// This file will be turn-off able in a future version of this project
// I want to be able to test all the settings methods, but changing these
// Tests any time you want to make a change to program settings is annoying