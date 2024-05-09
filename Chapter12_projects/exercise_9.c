#include <stdio.h>
// write the following function

double inner_product(const double *a, const double *b, int n)
{
    const double *p = a;
    const double *q = b;
    double sum = 0;
    for (; p < a + n;)
    {
        sum += (*p++ * *q++);
    }
    return sum;
    
}

int main()
{
    double a[5] = {1, 2, 2, 3, 4};
    double b[5] = {1, 1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int sum;

    sum = inner_product(a, b, n);
    printf("%d\n", sum);

}