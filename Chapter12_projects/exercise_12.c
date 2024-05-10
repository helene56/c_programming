#include <stdio.h>
// write the following function

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    *largest = *a; // initilize to the first element of the array
    *second_largest = *a;
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest)
        {
            *second_largest = *p;
        }
    }
}

int main()
{
    int a[5] = {5, 2, 3, 7, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int largest;
    int second_largest;

    find_two_largest(a, n, &largest, &second_largest);

    printf("largest: %d, second_largest: %d\n", largest, second_largest);
}