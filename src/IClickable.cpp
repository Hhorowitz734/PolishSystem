#include "../include/IClickable.h"

// Getter Methods

float IClickable::getX() const { return x; }
float IClickable::getY() const { return y; }


// Setter Methods

void IClickable::setX(float newX){
    x = newX;
    visual.x = newX;
}

void IClickable::setY(float newY){
    y = newY;
    visual.y = newY;
}

void IClickable::setLineColor(Color newColor){ lineColor = newColor; }

void IClickable::setFillColor(Color newColor){ fillColor = newColor; }

void IClickable::setIsDisplayed(bool newDisplayed) { isDisplayed = newDisplayed; }

void IClickable::toggleDisplayed() { setIsDisplayed(!isDisplayed); }

void IClickable::setIsSelected(bool newSelected) { isSelected = newSelected; }

void IClickable::toggleIsSelected() { setIsSelected(!isSelected); }

bool IClickable::getIsSelected() const { return isSelected; }

Rectangle IClickable::getVisual() const { return visual; }