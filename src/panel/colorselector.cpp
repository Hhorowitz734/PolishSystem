
// Includes
#include "../../include/panel/colorselector.h"

// Libraries
#include "raylib.h"

ColorSelector::ColorSelector(Color color, std::string country) : color(color), 
                                                                country(country),
                                                                x(100),
                                                                y(200),
                                                                box{x, y, 20, 20} {}

void ColorSelector::display() {

    //Draw box
    DrawRectangleRec(box, color);
    DrawRectangleLinesEx(box, 1, WHITE); 

    //Draw text
    DrawText(country.c_str(), x + 20 + 20, y, 20, WHITE);

}