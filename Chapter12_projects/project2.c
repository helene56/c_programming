#include <stdio.h>
// write a program that reads a mesage then checks wheter it's a palindrome
// revise the prgram to use pointerd instead of integers to keep track of positions in the array


int main()
{
    char userMessage;
    char array[50];
    int n = 50;
    char *p = array;
    
    printf("Enter a message: ");

    while ((userMessage = getchar()) != '\n')
    {
        *p++ = userMessage;
    }

    while (p >= array)
    {
        putchar(*p--);
    }

    printf("\n");

}