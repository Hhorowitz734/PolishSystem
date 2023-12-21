
// Libraries
#include "raylib.h"

// C++ Utilities
#include <string>

class ColorSelector {

public:

    /**
     * @brief Constructor for color selector box
     * 
     * @param country The country to be represented
     * @param color The desired color representing the country
     * @param x The x position of the selector
     * @param y The y position of the selector
    */
    ColorSelector(std::string country, Color color, float x, float y);

    /**
     * @brief Displays the color selector on the panel as desired
    */
    void display();


private:

    std::string country;

    Color color;

    float x;
    float y;

    Rectangle box;

};