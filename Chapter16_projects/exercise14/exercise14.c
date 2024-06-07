# define RECTANGLE 1
# define CIRCLE 0

struct point { 
    int x, y; 
};

struct shape {
    int shapekind; // rectangle or circle
    struct point center; // coordinates of center
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

// (a)
double compute_area(struct shape s)
{
    double area;
    if (s.shapekind == RECTANGLE)
    {
        area = s.u.rectangle.height * s.u.rectangle.width;
    }
    else if (s.shapekind == CIRCLE)
    {
        area = s.u.circle.radius *  s.u.circle.radius * 3.14; 
    }

    return area;
}

// (b)
struct shape move_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

// (c)
struct shape scale(struct shape s, double c)
{
    if (s.shapekind == RECTANGLE)
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }
    else if (s.shapekind == CIRCLE)
    {
        s.u.circle.radius *= c; 
    }

    return s;
}