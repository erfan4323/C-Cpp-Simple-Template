#include <iostream>
#include <vector>
#define RAYGUI_IMPLEMENTATION
#include <raygui.h>
#include <raylib.h>

#include "lib/hlp/help.h"
#include "lib/util.h"

void CustomLog(int msgType, const char* text, va_list args) { return; }

int main()
{
    int screenWidth = 635;
    int screenHeight = 450;

    SetTraceLogCallback(CustomLog);
    InitWindow(screenWidth, screenHeight, "Ant City DSA Project");



    SetTargetFPS(60);

    Hi();

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // drawing GUI
        GuiGroupBox(Rectangle{ 24, 48, 584, 384 }, "Ant City");
        GuiGroupBox(Rectangle{ 248, 72, 168, 296 }, "Decoder Output:");

        if (GuiButton(Rectangle{ 424, 72, 168, 32 }, "Accept"));

        GuiGroupBox(Rectangle{ 424, 120, 168, 248 }, "Parent.txt Values:");
        GuiGroupBox(Rectangle{ 40, 72, 200, 296 }, "Encoder Input:");
        GuiLabel(Rectangle{ 40, 376, 64, 32 }, "Input:");



        EndDrawing();
    }

    CloseWindow();

    Bye();

    return 0;
}