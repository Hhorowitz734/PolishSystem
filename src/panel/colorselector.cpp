
// Includes
#include "../../include/panel/colorselector.h"

// Libraries
#include "raylib.h"

ColorSelector::ColorSelector(std::string country, Color color, float x, float y) : color(color), 
                                                                                country(country),
                                                                                x(x),
                                                                                y(y),
                                                                                box{x, y, 20, 20} {}

void ColorSelector::display() {

    // Draw box
    DrawRectangleRec(box, color);
    DrawRectangleLinesEx(box, 1, WHITE); 

    // Draw text
    DrawText(country.c_str(), x + 20 + 20, y, 20, WHITE);

}

void ColorSelector::setBrightness(int newBrightness) {
    //Creates a temp color, modifies it, and sets this.color to it
    Color temp_color = color;
    temp_color.a = newBrightness;
    color = temp_color;
}

Rectangle ColorSelector::getVisual() const { return box; }
Color ColorSelector::getColor() const { return color; }
