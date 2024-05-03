// see page 216 in book
// to do
// 1. ask the user to enter a series of integers, which is stored in an array
// 2. sort the integers by calling the function selection_sort
// 2.1 selection_sort must do: search the array to find the largest element, then move it to the last position in the array
// 2.2 call it self and sort the first element n-1 of the array
// notes: later an update to this program would be a way to use getchar to break the loop that reads the input of characters to define the user input based on how many numbers are typed
#include <stdio.h>

#define SIZE 5

void selection_sort(int array[], int lenght);

int main()
{
    int user_array[SIZE];
    int input;
    int count = 0;

    printf("Enter a series of %d integers: ", SIZE);
    
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &user_array[i]);
    }

    // printf("count: %d\n", count);

    printf("numbers in array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d", user_array[i]);
    }
    printf("\n");

    selection_sort(user_array, SIZE);
    printf("numbers sorted test: ");
    for (int i = 0; i < SIZE; i++)
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
    // switches the current num at the end of the array to the pos of the largest num, then puts the largest num at the end of the array
    array[position] = array[lenght - 1];
    array[lenght-1] = largest_num;
    if (lenght > 1)
    {
         selection_sort(array, lenght - 1);
    }

}