#include <stdio.h>

int *find_largest(int a[], int n);

int main()
{
    int a[5] = {9, 3, 0, 8, 2};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d\n", *find_largest(a, n)); // uses * to dereference so i can get the value and NOT the address
}

int *find_largest(int a[], int n)
{
    int *largest = &a[0]; // initize a pointer that points to the address of the first element in a
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest) // checks if the value largest points to is larger than a[i], * dereferences it so instead of the address it now compares the value
        {
            largest = &a[i]; // pointer largest is updated to point to the current element in a, &a[i] captures the current address
        }
    }

    return largest; // returns the pointer largest
}