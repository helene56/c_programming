// write the following parametierized macros
// (a) CHECK(x,y,n) - has the value 1 if both x and y fall between 0 and n-1, inclusive.
// (b) MEDIAN(x,y,z) - finds the median of x,y, and z.
// (c) POLYNOMIAL(x) - computes the polynomial 3x^5+2x^4-5x^3-x^2+7x-6.

#include <stdio.h>
#define CHECK(x, y, n) (((x) >= 0 && (x) <= ((n)-1))&&((y) >= 0 && (y) <= ((n)-1)) ? 1 : 0)

int main()
{
    int x = 11;
    int y = 2;
    int n = 10;

    
    printf("%d\n", CHECK(x, y, n));

}