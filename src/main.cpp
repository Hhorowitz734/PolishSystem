//Header Files
#include "../include/decade.h"
#include "../include/year.h"
#include "../include/century.h"

//C++ Tools
#include <vector>
#include <iostream>

//Libraries
#include "raylib.h"

int main() {

    Century y2k(2000);

    // Initialize Raylib window
    int screenWidth = 800;
    int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Century Visualizer");

     // Set FPS
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) { // Detect window close button or ESC key

        // Start Drawing
        BeginDrawing();

        ClearBackground(BLACK);

        // Draw the rectangle for the Century object
        y2k.display();

        EndDrawing();
    }


    return 0;
}