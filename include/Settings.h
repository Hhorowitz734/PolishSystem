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
    int getCenturyHeight() const;

    /**
     * @brief Getter method for Century object width in Raylib
     */
    int getCenturyWidth() const;

    /**
     * @brief Getter method for Century object's x position in Raylib
     */
    int getCenturyX() const;

    /**
     * @brief Getter method for Century object's y position in Raylib
     */
    int getCenturyY() const; 

    /**
        * @brief Getter method for Decade object height in Raylib
    */
    int getDecadeHeight() const;

    /**
     * @brief Getter method for Decade object width in Raylib
     */
    int getDecadeWidth() const;

    /**
     * @brief Getter method for Decade object's x position in Raylib
     */
    int getDecadeX() const;

    /**
     * @brief Getter method for Decade object's y position in Raylib
     */
    int getDecadeY() const; 

    /**
     * @brief Getter method for Year object height in Raylib
     * 
     * @return Height of a year object in the application window.
     */
    int getYearHeight() const;

    /**
     * @brief Getter method for Year object width in Raylib
     * 
     * @return Width of a year object in the application window.
     */
    int getYearWidth() const;

    /**
     * @brief Getter method for Year object's x position in Raylib
     * 
     * @return The x-coordinate of the year object's position in the application window.
     */
    int getYearX() const;

    /**
     * @brief Getter method for Year object's y position in Raylib
     * 
     * @return The y-coordinate of the year object's position in the application window.
     */
    int getYearY() const;


private:

    //Window Settings for Raylib
    int windowWidth;
    int windowHeight;
    
    //Century Settings for RayLib
    int centuryWidth;
    int centuryHeight;
    int centuryX;
    int centuryY;

    //Decade Settings for Raylib
    int decadeWidth;
    int decadeHeight;
    int decadeX;
    int decadeY;

    //Year Settings for RayLib
    int yearWidth;
    int yearHeight;
    int yearX;
    int yearY;
    


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

    yearWidth((centuryWidth - 10) / 10),
    yearHeight(decadeHeight - 2),
    yearX(centuryX + 1),
    yearY(decadeY + 1)

    {}

    //Prevent copy-construction and assignment
    Settings(const Settings&) = delete;
    Settings& operator=(const Settings&) = delete;

};