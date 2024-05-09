#include <stdio.h>
// rewrite the following function to use pointer arithmetic

void store_zeros(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        a[i] = 0;
    }
}
