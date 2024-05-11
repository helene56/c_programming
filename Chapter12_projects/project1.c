#include <stdio.h>
// write a program that reads a message, then prints the reversal of the message
// revise the program to use pointer instead of an integer to keep track of the current position in the array

int main()
{
    char userMessage;
    char array[50];
    int n = 50;
    char *p = array;
    printf("Enter a message: ");

    while ((userMessage = getchar()) != '\n' && p != array + n)
    {
        *p++ = userMessage;
    }

    for (; p >= array; p--)
    {
        printf("%c", *p);
    }
    printf("\n");

}