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

private:

    //Window Settings for Raylib
    int windowWidth;
    int windowHeight;
    
    //Century Settings for RayLib
    int centuryWidth;
    int centuryHeight;
    int centuryX;
    int centuryY;
    


    /**
     * @brief Use this function to set the setting values
    */
    Settings() : 
    // RAYLIB WINDOW
    windowWidth(1000), 
    windowHeight(600),
    // CENTURY
    centuryWidth(windowHeight - 200),
    centuryHeight(windowHeight - 200),
    centuryX((windowWidth - windowHeight + 200) / 2),
    centuryY((100))
    {}

    //Prevent copy-construction and assignment
    Settings(const Settings&) = delete;
    Settings& operator=(const Settings&) = delete;

};