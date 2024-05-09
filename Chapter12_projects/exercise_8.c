#include <stdio.h>
// rewrite the following function to use pointer arithmetic

void store_zeros(int a[], int n)
{
    int *p;
    for (p = a; p < a + n; p++)
    {
        *p = 0;
    }
}

int main()
{
    int a[5];
    int n = sizeof(a) / sizeof(a[0]);

    store_zeros(a, n);

    for (int *p = a; p < a + n; p++)
    {
        printf("%d", *p);
    }
    printf("\n");
}