#include <raylib.h>

int main() {
    InitWindow(800, 450, "Prueba de Raylib con CMake");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("¡Raylib está funcionando correctamente!", 190, 200, 20, LIGHTGRAY);
            DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}