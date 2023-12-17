//Header Files
#include "../include/decade.h"
#include "../include/year.h"
#include "../include/century.h"

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

    // Main game loop
    while (!WindowShouldClose()) { 

        // Start Drawing
        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();
    }


    return 0;
}