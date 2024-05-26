#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

// (a)
struct fraction reduce(struct fraction f)
{
    int a = f.numerator;
    int b = f.denominator;

    int temp;
    do
    {
        temp = a % b;
        a = b;
        b = temp;
    } while (b != 0);
    
    f.numerator = f.numerator/a;
    f.denominator = f.denominator/a;
    printf("a: %d, b: %d\n", a, b);
    printf("numerator: %d, denominator: %d\n", f.numerator, f.denominator);
    
}

int main()
{
    struct fraction f = {48, 18};
    reduce(f);
}