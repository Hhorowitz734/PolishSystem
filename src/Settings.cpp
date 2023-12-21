#include "../include/Settings.h"
#include "../include/ITime.h"

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

//Setter Methods
ITime* Settings::getSelectedITime() const { return selectedITime; }

void Settings::setSelectedITime(ITime* newSelect) {

    if (newSelect == nullptr) { return; } //If newSelect doesn't exist, does nothing

    ITime* curr = newSelect;
    bool parentSelected = false;
    while (curr != nullptr) {
        parentSelected = curr->getIsSelected();
        if (parentSelected) { break; }
        curr = curr->getParent();
    }

    if (parentSelected) { newSelect = curr->getParent(); } //If newSelect is already selected, gets its parent

    /*
    // THIS CODE WAS USED FOR TESTING WHEN DEVELOPING THIS RECURSIVE UPWARD
    // STRATEGY. YOU CAN USE IT AGAIN TO TEST THIS CODE IN THE FUTURE

    std::cout << "Selected: " << newSelect << std::endl;
    std::cout << "Previously: " << selectedITime << std::endl;
    std::cout << "Selected's Parent: " << newSelect->getParent() << std::endl;
    std::cout << '\n';

    */
    if (selectedITime != nullptr) { selectedITime->toggleIsSelected(); } 
    newSelect->toggleIsSelected();
    selectedITime = newSelect;
}

