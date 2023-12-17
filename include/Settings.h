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

private:

    int windowHeight;
    int windowWidth;

    Settings() : windowWidth(1000), windowHeight(600) {}

    //Prevent copy-construction and assignment
    Settings(const Settings&) = delete;
    Settings& operator=(const Settings&) = delete;

};