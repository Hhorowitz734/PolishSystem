#include "raylib.h"
#include "../include/ITime.h"

#include <vector>

// Getter methods

Rectangle ITime::getVisual() const { return visual; }

float ITime::getX() const { return x; }
float ITime::getY() const { return y; }

// Setter methods
void ITime::setLineColor(Color color) { lineColor = color; }

void ITime::setX(float newX) { 
    x = newX; 
    visual.x = x;
}

void ITime::setY(float newY) { 
    y = newY;
    visual.y = y;
}

void ITime::setIsDisplayed(bool displayed) { isDisplayed = displayed; }
void ITime::toggleDisplayed() { isDisplayed = !isDisplayed; }

bool ITime::getIsSelected() const { return isSelected; }
void ITime::setIsSelected(bool newSelected) { 
    isSelected = newSelected;
    if (isSelected) { setLineColor(RED); }
    else { 
        setLineColor(WHITE);
        display(); //Redisplay it to show it as default
    }
}
void ITime::toggleIsSelected() { setIsSelected(!isSelected); }

// Raylib Functionalities

void ITime::display() { 

    if (isDisplayed) { DrawRectangleLinesEx(visual, 1, lineColor); }

    // Recursively display all sub times for a given time
    std::vector<ITime*> subtimes = getSubTime();

    if (subtimes.empty()) { return; } // Base case -> Year

    for (ITime* subdivision : subtimes) {
        subdivision->display();
    }
    
}

ITime* ITime::getParent() { return parent; }
void ITime::setParent(ITime* parent_elem) const { parent_elem = parent; } // Move this to the constructor in the future