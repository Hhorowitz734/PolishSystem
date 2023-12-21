//Header Files
#include "../include/ITime.h"
#include "../include/decade.h"
#include "../include/year.h"
#include "../include/century.h"

//Panel Headers
#include "../include/panel/colorpanel.h"

//C++ Tools
#include <vector>
#include <iostream>

//Libraries
#include "raylib.h"

//Settings
#include "../include/Settings.h"

int main() {

    Settings& settings = Settings::GetInstance();
    
    //Gets necessary values from settings
    int width = settings.getWidth();
    int height = settings.getHeight();

    InitWindow(width, height, "Polish System");

    // Set FPS
    SetTargetFPS(60);

    // FACTORIES + OBJECTS
    Century y2k(2000);
    std::vector<Year*> y2k_years = y2k.getYears();

    //SIDE PANEL
    std::vector<std::string> countries = {"America", "China", "Russia", "Djibouti"};
    ColorPanel colorpanel(countries);


    // Main game loop
    while (!WindowShouldClose()) { 

        // Start Drawing
        BeginDrawing();

        y2k.display();
        colorpanel.display();

        //If the mouse is pressed, figures out what year it is pressed on
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) { 

            Vector2 mousePos = GetMousePosition();

            for (Year* y : y2k_years) {
                if (CheckCollisionPointRec(mousePos, y->getVisual())) { 
                    settings.setSelectedITime(y); 
                    break;
                }
            }
        }

        //NEXT STEPS -> Make 1 click show what is selected
        // Make 2 clicks select decade
        // Make 3 clicks select century
        // Make 4 select year again
        // Then, make them colorable

        ClearBackground(BLACK);

        EndDrawing();
    }


    return 0;
}