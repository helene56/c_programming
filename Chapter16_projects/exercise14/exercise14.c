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