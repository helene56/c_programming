#include <stdbool.h>

struct point { 
    int x, y; 
};

struct rectangle { 
    struct point upper_left, lower_right; 
};

// (a)
int area(struct rectangle r)
{
    int a = r.lower_right.y - r.upper_left.y;
    int b = r.lower_right.x - r.upper_left.x;

    int A = a * b;
    return A;
}

// (b)
struct point center(struct rectangle r)
{
    int x_center = (r.lower_right.x - r.upper_left.x) / 2;
    int y_center = (r.lower_right.y - r.upper_left.y) / 2;

    return (struct point) {x_center, y_center};
}

// (c)
struct rectangle move(struct rectangle r, int x_units, int y_units)
{
    r.upper_left.x += x_units;
    r.lower_right.x += x_units;
    r.upper_left.y += y_units;
    r.lower_right.y += y_units;

    return r;
}

// (d)
bool lies_within(struct rectangle r, struct point p)
{
    int x = p.x;
    int y = p.y;

    return (r.lower_right.x > x && r.upper_left.x < x && r.upper_left.y < y && r.lower_right.y > y);
}