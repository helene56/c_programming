#include <stdio.h>
// rewrite function to use pointer arithmetic instead of array subscipting

int sum_array(const int a[], int n)
{
    int i, sum;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}