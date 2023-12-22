
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

    /**
     * @brief Sets the brightness of the color
    */
   void setBrightness(int newBrightness);

   /**
    * @brief Gets the visual Raylib Rectangle object for collision detection
    * 
    * @returns The Rectangle object representing the Color Selector
   */
  Rectangle getVisual() const;

  /**
   * @brief Getter method for selector's color
   * 
   * @returns The Color object of Raylib selector
  */
  Color getColor() const;


private:

    std::string country;

    Color color;

    float x;
    float y;

    Rectangle box;

};