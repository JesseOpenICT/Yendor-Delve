#ifndef colors_h
#define colors_h
#include "raylib.h"

extern int PaletteAmount;

// variables
extern Color color_lightgray;
extern Color color_gray;
extern Color color_darkgray;
extern Color color_yellow;
extern Color color_gold;
extern Color color_orange;
extern Color color_red;
extern Color color_maroon;
extern Color color_green;
extern Color color_lime;
extern Color color_darkgreen;
extern Color color_skyblue;
extern Color color_blue;
extern Color color_darkblue;
extern Color color_purple;
extern Color color_violet;
extern Color color_darkpurple;
extern Color color_beige;
extern Color color_brown;
extern Color color_darkbrown;
extern Color color_white;
extern Color color_black;
extern Color color_magenta;
extern Color color_raywhite;

// pointers
extern Color* lightgray;
extern Color* gray;
extern Color* darkgray;
extern Color* yellow;
extern Color* gold;
extern Color* orange;
extern Color* red;
extern Color* maroon;
extern Color* green;
extern Color* lime;
extern Color* darkgreen;
extern Color* skyblue;
extern Color* blue;
extern Color* darkblue;
extern Color* purple;
extern Color* violet;
extern Color* darkpurple;
extern Color* beige;
extern Color* brown;
extern Color* darkbrown;
extern Color* white;
extern Color* black;
extern Color* magenta;
extern Color* raywhite;


typedef struct Palette_Values
{
    Color lightgray;
    Color gray;
    Color darkgray;
    Color yellow;
    Color gold;
    Color orange;
    Color red;
    Color maroon;
    Color green;
    Color lime;
    Color darkgreen;
    Color skyblue;
    Color blue;
    Color darkblue;
    Color purple;
    Color violet;
    Color darkpurple;
    Color beige;
    Color brown;
    Color darkbrown;
    Color white;
    Color black;
    Color magenta;
    Color raywhite;
} Palette_Values;

void set_palette(int);
Palette_Values get_palette(int);

#endif