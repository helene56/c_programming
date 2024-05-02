// see page 216 in book
// to do
// 1. ask the user to enter a series of integers, which is stored in an array
// 2. sort the integers by calling the function selection_sort
// 2.1 selection_sort must do: search the array to find the largest element, then move it to the last position in the array
// 2.2 call it self and sort the first element n-1 of the array 
#include <stdio.h>
#define SIZE 50

int main()
{
    int user_array[SIZE];
    int input;
    int count = 0;

    printf("Enter a series of integers: ");
    while ((input = getchar()) != '\n')
    {
        user_array[count] = input;
        count++;
    }



}