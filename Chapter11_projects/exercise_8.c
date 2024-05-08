#include <stdio.h>

int *find_largest(int a[], int n);

int main()
{
    int a[5] = {9, 3, 0, 8, 2};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d\n", find_largest(a, n));
}

int *find_largest(int a[], int n)
{
    int temp = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
            x = i;
        }
    }

    return &a[x];
}