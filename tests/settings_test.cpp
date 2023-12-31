#include "gtest/gtest.h"
#include "../include/Settings.h"
#include "../include/panel/colorselector.h"

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

TEST_F(SettingsTest, CheckDecadeGetters) {

    ASSERT_EQ(settings.getDecadeWidth(), settings.getCenturyWidth() - 2);
    ASSERT_EQ(settings.getDecadeHeight(), (settings.getCenturyHeight() - 10) / 10);
    ASSERT_EQ(settings.getDecadeX(), settings.getCenturyX());
    ASSERT_EQ(settings.getDecadeY(), settings.getCenturyY() + 2);

    
}

TEST_F(SettingsTest, CheckYearGetters) {

    ASSERT_EQ(settings.getYearWidth(), (settings.getCenturyWidth() - 10) / 10);
    ASSERT_EQ(settings.getYearHeight(), settings.getDecadeHeight() - 5);
    ASSERT_EQ(settings.getYearX(), settings.getCenturyX() + 2);
    ASSERT_EQ(settings.getYearY(), settings.getDecadeY() + 3);

}


TEST_F(SettingsTest, CheckSelectorFeatures) {

    //Sample color selector being clicked
    ColorSelector* usa = new ColorSelector("USA", BLUE, 0, 0);
    settings.setSelectedColor(usa->getColor());

    //Blue is {0, 121, 241, 255}
    Color settings_color = settings.getSelectedColor();
    ASSERT_EQ(settings_color.r, 0);
    ASSERT_EQ(settings_color.g, 121);
    ASSERT_EQ(settings_color.b, 241);
    ASSERT_EQ(settings_color.a, 255);
    
}



// This file will be turn-off able in a future version of this project
// I want to be able to test all the settings methods, but changing these
// Tests any time you want to make a change to program settings is annoying