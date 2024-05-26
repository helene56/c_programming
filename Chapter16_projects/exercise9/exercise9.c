#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

// (a)
struct color make_color(int red, int green, int blue)
{
    if (red < 0)
    {
        red = 0;
    }
    else if (red > 255)
    {
        red = 255;
    }
    if (green < 0)
    {
        green = 0;
    }
    else if (green > 255)
    {
        green = 255;
    }
    if (blue < 0)
    {
        blue = 0;
    }
    else if (blue > 255)
    {
        blue = 255;
    }

    return (struct color) {red, green, blue};
}