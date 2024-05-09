#include <stdio.h>
#include <stdbool.h>
// write the following function

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
        {
            return true;
        }

    }
    return false;
}

int main()
{
    int a[5] = {9, 3, 0, 8, 2};
    int n = sizeof(a) / sizeof(a[0]); // gets the size of the array a
    int key = 0;

    printf("%d\n", search(a, n, key));
}

