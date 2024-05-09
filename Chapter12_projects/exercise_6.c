#include <stdio.h>

int sum_array(const int a[], int n)
{
    int i, sum;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}