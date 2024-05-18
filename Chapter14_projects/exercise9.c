// write the following parametierized macros
// (a) CHECK(x,y,n) - has the value 1 if both x and y fall between 0 and n-1, inclusive.
// (b) MEDIAN(x,y,z) - finds the median of x,y, and z.
// (c) POLYNOMIAL(x) - computes the polynomial 3x^5+2x^4-5x^3-x^2+7x-6.

#include <stdio.h>
#include <math.h>
#define CHECK(x, y, n) (((x) >= 0 && (x) <= ((n)-1))&&((y) >= 0 && (y) <= ((n)-1)) ? 1 : 0)
#define MEDIAN(x, y, z) ( (x) > (y) && (x) > (z) ? ((z) > (y) ? (z) : (y)) : ((x) > (z) ? (x) : (z)))
#define POLYNOMIAL(x) (3*pow((x),5) + 2*pow((x),4) - 5*pow((x),3) - pow((x),2) + 7*(x)-6)

int main()
{
    int x = 3;
    int y = 4;
    int z = 2;
    int n = 10;

    
    printf("%d\n", CHECK(x, y, n));
    printf("median of %d, %d, %d is %d\n", x, y, z, MEDIAN(x, y, z));
    printf("polynomial of %d is: %d\n", x, POLYNOMIAL(x));

}