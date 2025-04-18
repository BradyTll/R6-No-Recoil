#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

bool EnableRC;
const char* Modes[] = {"LOW", "MEDIUM", "HIGH", "ULTRA"};
int SelectedMode = 1;
const char* ModeDescriptions[] =
{
    "LOW: Best for Low Recoil SMGs and Pistols",
    "MEDIUM: Best for Medium Recoil Assault Rifles (e.g 556XI) and High Recoil SMGs (e.g SMG-12)",
    "HIGH: Best for High Recoil Assault Rifles (e.g R4C)",
    "ULTRA: Best for Twitch's F2",
};

// Recoil settings
struct RecoilPreset
{
    int Vertical;
    int Horizontal;
};
RecoilPreset RecoilPresets[] =
{
    {2, 0}, {3, 0}, {4, 0}, {5, 0}
};
RecoilPreset CurrentRecoil = RecoilPresets[SelectedMode];
bool Running = true;

// https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
int ToggleKey = VK_CAPITAL;
bool UseToggleKey = false;
