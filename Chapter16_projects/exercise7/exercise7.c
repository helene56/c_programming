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

    return f;
    
}

// (b)
struct fraction add(struct fraction f1, struct fraction f2)
{
    f1.numerator = f1.numerator * f2.denominator;
    f2.numerator = f2.numerator * f1.denominator;

    int total_numerator = f1.numerator + f2.numerator;
    int total_denominator = f1.denominator * f2.denominator;

    struct fraction f_total = {total_numerator, total_denominator};
    f_total = reduce(f_total);
    
    return f_total;
}

// (c)
struct fraction subtract(struct fraction f1, struct fraction f2)
{
    f1.numerator = f1.numerator * f2.denominator;
    f2.numerator = f2.numerator * f1.denominator;

    int total_numerator = f1.numerator - f2.numerator;
    int total_denominator = f1.denominator * f2.denominator;

    struct fraction f_total = {total_numerator, total_denominator};
    f_total = reduce(f_total);
    
    return f_total;
}

// (d)
struct fraction multiply(struct fraction f1, struct fraction f2)
{
    int numerator = f1.numerator * f2.numerator;
    int denominator = f1.denominator * f2.denominator;

    return reduce((struct fraction) {.numerator = numerator, .denominator = denominator});
}

// (e)
struct fraction divide(struct fraction f1, struct fraction f2)
{
    int a = f2.numerator;
    int b = f2.denominator;

    f2.denominator = a;
    f2.numerator = b;

    struct fraction f = multiply(f1, f2);
    f = reduce(f);

    return f;
}

int main()
{
    struct fraction f = {48, 18};
    struct fraction f1 = {2, 6};
    struct fraction f2 = {4, 9};
    struct fraction f_new = reduce(f);
    printf("newf numerator: %d, newf denominator: %d\n", f_new.numerator, f_new.denominator);

    struct fraction f_result = add(f1, f2);
    printf("add output: numerator: %d, denominator: %d\n", f_result.numerator, f_result.denominator);
    
    struct fraction multiply_result = multiply(f1, f2);
    printf("result of multiply: numerator: %d, denominator: %d\n", multiply_result.numerator, multiply_result.denominator);

    struct fraction divide_result = divide(f1, f2);
    printf("result of divide: numerator: %d, denominator: %d\n", divide_result.numerator, divide_result.denominator);
}