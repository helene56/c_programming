#include <stdio.h>
// rewrite function to use pointer arithmetic instead of array subscipting

int sum_array(const int *a, int n) // a* and a[] in functions both works as parameters
{
    int sum;
    const int *p;
    sum = 0;
    for (p = a; p < a + n; p++)
    {
        sum += *p;
    }
    return sum;
}

int main()
{
    int a[5] = {9, 3, 0, 8, 2};
    int n = sizeof(a) / sizeof(a[0]); // gets the size of the array a

    printf("sum: %d\n", sum_array(a, n));
}