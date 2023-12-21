// Includes
#include "colorselector.h"

// C++ Utils
#include <vector>

class ColorPanel {

public:

    /**
     * @brief Constructor for colorpanel using only strings for country names
     * 
     * @note This constructor will randomly assign colors to each country provided
    */
    ColorPanel(const std::vector<std::string>& countries);

    /**
     * @brief Displays the color panel
    */
    void display();

private:

    std::vector<ColorSelector*> selectors;
};