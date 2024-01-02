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