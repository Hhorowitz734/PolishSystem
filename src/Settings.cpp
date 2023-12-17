#include "../include/Settings.h"

//Getter Methods
int Settings::getHeight() const { return windowHeight; }
int Settings::getWidth() const { return windowWidth; }

float Settings::getCenturyHeight() const { return centuryHeight; }
float Settings::getCenturyWidth() const { return centuryWidth; }
float Settings::getCenturyX() const { return centuryX; }
float Settings::getCenturyY() const { return centuryY; }

float Settings::getDecadeHeight() const { return decadeHeight; }
float Settings::getDecadeWidth() const { return decadeWidth; }
float Settings::getDecadeX() const { return decadeX; }
float Settings::getDecadeY() const { return decadeY; }

float Settings::getYearHeight() const { return yearHeight; }
float Settings::getYearWidth() const { return yearWidth; }
float Settings::getYearX() const { return yearX; }
float Settings::getYearY() const { return yearY; }