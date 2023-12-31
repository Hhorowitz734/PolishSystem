// Includes
#include "ITime.h"

/**
 * @brief The Settings class will be a singleton to manage the visual settings of the program
*/
class Settings {

public:

    /**
     * @brief Singleton access method for Settings
    */
    static Settings& GetInstance() {
        static Settings instance;
        return instance;
    }

    /**
     * @brief Getter method for window height
    */
    int getHeight() const;

    /**
     * @brief Getter method for window width
    */
    int getWidth() const;

    /**
        * @brief Getter method for Century object height in Raylib
    */
    float getCenturyHeight() const;

    /**
     * @brief Getter method for Century object width in Raylib
     */
    float getCenturyWidth() const;

    /**
     * @brief Getter method for Century object's x position in Raylib
     */
    float getCenturyX() const;

    /**
     * @brief Getter method for Century object's y position in Raylib
     */
    float getCenturyY() const; 

    /**
        * @brief Getter method for Decade object height in Raylib
    */
    float getDecadeHeight() const;

    /**
     * @brief Getter method for Decade object width in Raylib
     */
    float getDecadeWidth() const;

    /**
     * @brief Getter method for Decade object's x position in Raylib
     */
    float getDecadeX() const;

    /**
     * @brief Getter method for Decade object's y position in Raylib
     */
    float getDecadeY() const; 

    /**
     * @brief Getter method for Year object height in Raylib
     * 
     * @return Height of a year object in the application window.
     */
    float getYearHeight() const;

    /**
     * @brief Getter method for Year object width in Raylib
     * 
     * @return Width of a year object in the application window.
     */
    float getYearWidth() const;

    /**
     * @brief Getter method for Year object's x position in Raylib
     * 
     * @return The x-coordinate of the year object's position in the application window.
     */
    float getYearX() const;

    /**
     * @brief Getter method for Year object's y position in Raylib
     * 
     * @returns The y-coordinate of the year object's position in the application window.
     */
    float getYearY() const;

    /**
     * @brief Gets the currently selected ITime* element
     * 
     * @returns The ITime* currently selected
    */
    ITime* getSelectedITime() const;

    /**
     * @brief Sets a new SelectedITime, which is used to know what the currently selected time division is
     * 
     * @param newSelect The new ITime* that is selected
    */
    void setSelectedITime(ITime* newSelect);

    /**
     * @brief Gets the ColorPanel's x position in Raylib
     * 
     * @returns The ColorPanel's x position in Raylib
    */
    float getColorPanelX() const;

    /**
     * @brief Gets the ColorPanel's y position in Raylib
     * 
     * @returns The ColorPanel's y position in Raylib
    */
    float getColorPanelY() const;

    /**
     * @brief Sets the currently selected color
    */
    void setSelectedColor(Color newColor);

    /**
     * @brief Getter method for the currently selected color
     * 
     * @returns The raylib Color object of the currently selected color
    */
    Color getSelectedColor() const;


private:

    // Window Settings for Raylib
    int windowWidth;
    int windowHeight;
    
    //C entury Settings for RayLib
    float centuryWidth;
    float centuryHeight;
    float centuryX;
    float centuryY;

    // Decade Settings for Raylib
    float decadeWidth;
    float decadeHeight;
    float decadeX;
    float decadeY;

    // Year Settings for RayLib
    float yearWidth;
    float yearHeight;
    float yearX;
    float yearY;

    // Selecting ITime elements
    ITime* selectedITime = nullptr;
    Color selectedColor = RED; //Replace this with some sort of element to represent country info n stuff (define a struct in colorselector)
    

    // Settings for Color Panel
    /**
     * Do not be afraid to modify this to just a panel
     * In a future rendition of this code
    */
    float colorPanelX;
    float colorPanelY;

    /**
     * @brief Use this function to set the setting values
    */
    Settings() : 
    // RAYLIB WINDOW
    windowWidth(1000), 
    windowHeight(600),
    
    //CENTURY
    centuryWidth(windowHeight - 200),
    centuryHeight(windowHeight - 200),
    centuryX((windowWidth - windowHeight + 200) / 2),
    centuryY(100),

    //DECADE
    decadeWidth(centuryWidth - 2),
    decadeHeight((centuryHeight - 10) / 10),
    decadeX(centuryX),
    decadeY(centuryY + 2),

    //YEAR
    yearWidth((centuryWidth - 10) / 10),
    yearHeight(decadeHeight - 5),
    yearX(centuryX + 2),
    yearY(decadeY + 3),

    //COLOR PANEL
    colorPanelX(100),
    colorPanelY(200)

    {}

    //Prevent copy-construction and assignment
    Settings(const Settings&) = delete;
    Settings& operator=(const Settings&) = delete;

};