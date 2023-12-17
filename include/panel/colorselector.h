
// Libraries
#include "raylib.h"

// C++ Utilities
#include <string>

class ColorSelector {

public:

    /**
     * @brief Constructor for color selector box
     * 
     * @param color The desired color representing the country
     * @param country The country to be represented by this color
    */
    ColorSelector(Color color, std::string country);

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