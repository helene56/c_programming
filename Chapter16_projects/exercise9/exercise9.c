#include <stdio.h>
#include <stdbool.h>


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

// (b)
int getRed(struct color c)
{
    return c.red;
}

// (c) could have returned the equation directly as if it was true it would evalute to true
bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red && color1.blue == color2.blue && color1.green == color2.green)
    {
        return true;
    }
    return false;
}

// (d)
struct color brighter(struct color c)
{
    if (c.blue == 0 && c.green == 0 && c.red == 0)
    {
        return (struct color) {.red = 3, .green = 3, .blue = 3};
    }
    if (c.blue > 0 && c.blue < 3)
    {
        c.blue = 3;
    }
    if (c.green > 0 && c.green < 3)
    {
        c.green = 3;
    }
    if (c.red > 0 && c.red < 3)
    {
        c.red = 3;
    }

    c.blue = (int) (c.blue/0.7);
    c.green = (int) (c.green/0.7);
    c.red = (int) (c.red/0.7);

    if (c.red > 255)
    {
        c.red = 255;
    }
    if (c.blue > 255)
    {
        c.blue = 255;
    }
    if (c.green > 255)
    {
        c.green = 255;
    }

    return c;
}

// (e)
struct color darker(struct color c)
{
    return (struct color) {(int) (c.red * 0.7), (int) (c.green * 0.7), (int) (c.blue * 0.7)};
}