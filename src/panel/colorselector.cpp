
// Includes
#include "../../include/panel/colorselector.h"

// Libraries
#include "raylib.h"

ColorSelector::ColorSelector(std::string country, Color color, float x, float y) 
    : IClickable(x, y, 20, 20), // Initializing the IClickable base class
      color(color), 
      country(country) {}

      
void ColorSelector::display() {

    // Draw box
    DrawRectangleRec(visual, color);
    DrawRectangleLinesEx(visual, 1, WHITE); 

    // Draw text
    DrawText(country.c_str(), x + 20 + 20, y, 20, WHITE);

}

void ColorSelector::setBrightness(int newBrightness) {
    //Creates a temp color, modifies it, and sets this.color to it
    Color temp_color = color;
    temp_color.a = newBrightness;
    color = temp_color;
}

Rectangle ColorSelector::getVisual() const { return visual; }
Color ColorSelector::getColor() const { return color; }
