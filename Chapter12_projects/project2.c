#include <stdio.h>
#include <stdbool.h>
// write a program that reads a mesage then checks wheter it's a palindrome
// revise the prgram to use pointerd instead of integers to keep track of positions in the array


int main()
{
    char userMessage;
    char array[50];
    int n = 50;
    char *p = array;
    bool palindrome = false;
    char *p2 = array;
    
    printf("Enter a message: ");

    while ((userMessage = getchar()) != '\n')
    {
        *p++ = userMessage;
    }

    while (p >= array)
    {
        // if (*p2++ == *p--)
        // {
        //     palindrome = true;
        // }

        palindrome = *p2++ == *p-- ? true : palindrome;
    }
    
    if (palindrome)
    {
        printf("Palindrome");
    } else
    {
        printf("Not a palindrome");
    }
    printf("\n");

}