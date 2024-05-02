// see page 216 in book
// to do
// 1. ask the user to enter a series of integers, which is stored in an array
// 2. sort the integers by calling the function selection_sort
// 2.1 selection_sort must do: search the array to find the largest element, then move it to the last position in the array
// 2.2 call it self and sort the first element n-1 of the array 
#include <stdio.h>

#define SIZE 50

void selection_sort(int array[], int lenght);


int main()
{
    int user_array[SIZE];
    int input;
    int count = 0;

    printf("Enter a series of integers: ");
    while ((input = getchar()) != '\n')
    {
        // user_array[count] = input;
        // count++;
    }

    printf("count: %d\n", count);

    printf("numbers in array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", user_array[i]);
    }
    printf("\n");

    selection_sort(user_array, count);
    printf("numbers sorted test: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", user_array[i]);
    }
    printf("\n");

}

void selection_sort(int array[], int lenght)
{
    // finds the largest number in the array
    int largest_num = 0;
    int position = 0;

    for (int i = 0; i < lenght; i++)
    {
        if (array[i] > largest_num)
        {
            largest_num = array[i];
            position = i;
        }
    }

    // puts it in the last position of the array
    array[position] = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (i > position)
        {
            array[i] = array[i-1];
        }
    }

    array[lenght-1] = largest_num;

}