// write a macro NELEMS(a) that computes the number of elements in a one-dimensional array a.

#include <stdio.h>

#define NELEMS(a) ((sizeof(a)) / (sizeof(a[0])))

int main()
{
    int a[] = {1, 2, 2, 3};
    printf("size of aray: %d\n", NELEMS(a));
}