#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int i = 1, j = 5;

    swap(&i, &j);

    printf("i: %d, j: %d\n", i, j);


}

void swap(int *p, int *q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}