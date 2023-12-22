
// Includes
#include "../../include/panel/colorpanel.h"
#include "../../include/Settings.h"

// C++ Utils
#include <vector>

// Libraries
#include "raylib.h"


// Constructors

ColorPanel::ColorPanel(const std::vector<std::string>& countries) {

    float initialX = Settings::GetInstance().getColorPanelX();
    float initialY = Settings::GetInstance().getColorPanelY();

    int iters = 0; //Keeps track of iterations of loop

    for (std::string country : countries) {

        Color randomColor = {
            static_cast<unsigned char>(GetRandomValue(0, 255)),
            static_cast<unsigned char>(GetRandomValue(0, 255)), 
            static_cast<unsigned char>(GetRandomValue(0, 255)), 
            150 };
        
        //Creates a new ColorSelector for the country
        ColorSelector* curr = new ColorSelector(country, 
                                                randomColor,
                                                initialX,
                                                initialY + (30 * iters));

        selectors.push_back(curr); //Adds new ColorSelector to ColorPanel's vector

        iters++;

    }
}

// Others

void ColorPanel::display() {
    for (ColorSelector* selector : selectors) { selector->display(); }
}

std::vector<ColorSelector*> ColorPanel::getSelectors() const { return selectors; }