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
    // If the new selection is the same as the current selection, toggle it.
    if (selectedITime == newSelect) {
        if (selectedITime != nullptr) {
            selectedITime->toggleIsSelected();
            // If it gets deselected, set both to nullptr.
            if (!selectedITime->getIsSelected()) {
                selectedITime = nullptr;
                lastSelectedITime = nullptr;
            }
        }
    } else {
        // If the new selection is different, deselect the current one if it exists.
        if (selectedITime != nullptr) {
            selectedITime->setIsSelected(false);
        }

        // Update the selection.
        lastSelectedITime = selectedITime;
        selectedITime = newSelect;

        // Select the new one if it's not nullptr.
        if (selectedITime != nullptr) {
            selectedITime->setIsSelected(true);
        }
    }
}
