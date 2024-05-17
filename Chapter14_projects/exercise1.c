// write a parameterized macros that compute the following values.
// a. the cube of x
// b. the remainder when n is divided by 4
// c. 1 if the product of x and y is less than 100, 0 otherwise
#include <stdio.h>
#define CUBE(x) ((x)*(x)*(x)) // task a.
#define REMAINDER(n) ((n) % 4) // task b.
#define PRODUCT(x,y) (((x)*(y))< 100 ? 1 : 0)

int main()
{
    int x = 2;
    int y = 400;
    printf("the cubed value of %d is %d\n", x, CUBE(x));
    printf("the remainder of %d is %d when divided by 4\n", x, REMAINDER(x));
    printf("%d\n", PRODUCT(x,y));

}