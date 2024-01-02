
// Libraries
#include "raylib.h"

// C++ Utilities
#include <string>

// Includes
#include "../IClickable.h"

class ColorSelector : public IClickable {

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
    void display() override;

    /**
     * @brief Sets the brightness of the color
    */
   void setBrightness(int newBrightness);

  /**
   * @brief Getter method for selector's color
   * 
   * @returns The Color object of Raylib selector
  */
  Color getColor() const;


private:

    std::string country;

    Color color;

};