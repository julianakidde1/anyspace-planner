#include "raylib.h"

int main() {
    InitWindow(800, 450, "GAM");
    SetTargetFPS(60);

    // GameState state = initState();   // game state lives out here
    
    while (!WindowShouldClose()) {
        float dt = GetFrameTime();       // getting dt fromraylib
       
        //--main game loop logic 
        // input = readInput();              // poll: IsKeyDown, GetMousePosition, ... e.t.c
        // state = updateState(state, input, dt);   // the  update step

        BeginDrawing(); //the render(state) is in this block 
        ClearBackground(RAYWHITE);
        DrawText("Welcome to GAM", 320, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}