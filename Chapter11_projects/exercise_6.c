#include <stdio.h>
#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);


int main()
{
    int a[N] = {0, 1, 5, 3, 7};
    int largest, second_largest;

    find_two_largest(a, N, &largest, &second_largest);

    printf("largest: %d, second_largest: %d\n", largest, second_largest);

}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int temp = 0;
    int temp_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > temp_2 && a[i] < temp)
        {
            temp_2 = a[i];
        }
    }

    *largest = temp;
    *second_largest = temp_2;
}