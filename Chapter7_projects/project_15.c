// see page 159 in book
#include <stdio.h>

int main()
{
    int positive_integer;
    int i;
    long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &positive_integer);
    
    for (i = positive_integer; i > 1; i--)
    {
        factorial *= i;
    }
    
    printf("Factorial of %d: %lld\n", positive_integer, factorial);
}