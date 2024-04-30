// see page 159 in book
#include <stdio.h>
#include <math.h>

int main()
{
    double y = 1;
    double x;
    double average = 0;
    double division;
   
    printf("Enter a positive number: "); 
    scanf("%lf", &x);
        
    while (fabs(average - y) > 0.0001 * y)
    {
        //printf("fabs %lf\n", fabs(average - y));
        division = x / y;
        //printf("divison %lf\n", division);
        average = (y + division) / 2;
        //printf("average %lf\n", average);
        
        if (fabs(average - y) < 0.0001 * y)
        {
            y = average; 
        } else
        {
            y = average;
            average = 0;
        }
    }
    printf("Square root: %f\n", y);
}