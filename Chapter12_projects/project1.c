#include <stdio.h>
// write a program that reads a message, then prints the reversal of the message
// revise the program to use pointer instead of an integer to keep track of the current position in the array

int main()
{
    char userMessage;
    char array[50];
    int n = 50;
    int i = 0;
    

    printf("Enter a message: ");

    while ((userMessage = getchar()) != '\n' && i != n)
    {
        array[i] = userMessage;
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        printf("%c", array[j]);
    }
    printf("\n");

}