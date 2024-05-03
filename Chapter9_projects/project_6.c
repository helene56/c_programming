// see page 217 in book
// to do
// write a function that computes the value of the polonomial: 3x^5+2x^4-5x^3-x^2+7x-6
// 1. ask the user for a value for x
// 2. call function
// 3. display result returned by function
#include <stdio.h>
#include <math.h>

double polynomial(double x);

int main()
{
    double user_x;
    
    printf("Enter a value for x: ");
    scanf("%lf", &user_x);
    double result = polynomial(user_x);

    printf("result: %.2f", result);
    printf("\n");
}

double polynomial(double x)
{
    return (3*pow(x, 5) + 2*pow(x, 4) - 5*pow(x, 3) - pow(x, 2) + 7*x - 6);
}