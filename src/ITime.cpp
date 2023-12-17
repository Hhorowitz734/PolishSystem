#include "raylib.h"
#include "../include/ITime.h"

//Getter methods

Rectangle ITime::getVisual() const { return visual; }

//Raylib Functionalities

void ITime::display() { DrawRectangleLinesEx(visual, 1, BLUE); }