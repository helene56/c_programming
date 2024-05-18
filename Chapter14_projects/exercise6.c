// a. write a macro DISP(f,x) that expands into a call of printf that displays the value of the funcion f when called with argument x.
// b. write a macro DISP2(f,x,y) that's similar to DISP but works for functions with two arguments.

#include <stdio.h>
#include <math.h>

#define DISP(f,x) printf(#f "(%g) = %g\n", x, f(x));
#define DISP2(f,x,y) printf(#f "(%g,%g) = %g\n", x, y, f(x,y));

int main()
{
    DISP(sqrt, 3.0);
    DISP2(pow, 3.0, 2.0);
}