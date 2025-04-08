#pragma once

#include "../include/Button.hpp"
#include <vector>

// Function to center text
void DrawCenteredText(HDC hdc, LPCSTR text, int yOffset, int windowWidth)
{
    SIZE textSize;
    GetTextExtentPoint32(hdc, text, strlen(text), &textSize);
    int textX = (windowWidth - textSize.cx) / 2;
    TextOut(hdc, textX, yOffset, text, strlen(text));
}

std::vector<Button> Buttons;
const int WINDOW_WIDTH = 775;
const int WINDOW_HEIGHT = 450;

bool DarkTheme;

void ToggleTheme()
{
    DarkTheme = !DarkTheme;
}
