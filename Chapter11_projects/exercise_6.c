#include <stdio.h>
#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
    int a[N] = {0, 1, 5, 3, 7};
    int largest, second_largest;

    largest = second_largest = a[0];

    find_two_largest(a, N, &largest, &second_largest);

    printf("largest: %d, second_largest: %d\n", largest, second_largest);

}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest)
        {
            *second_largest = a[i];
        }
        
    }
}