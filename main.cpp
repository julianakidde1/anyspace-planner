#include "raylib.h"

int main() {
    InitWindow(800, 450, "GAM");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("it works", 320, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}