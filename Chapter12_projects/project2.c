#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> /* isalpha, toupper */
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

    while ((userMessage = toupper(getchar())) != '\n' && p < array + n)
    {
        if (isalpha(userMessage))
        {
            *p++ = userMessage;
        }
    }

    p--; // Move back from the '\0' position or past-the-end position to the last valid character

    while (p > p2)
    {
        if (*p2++ == *p--)
        {
            palindrome = true;
            break; // Exit loop early if a mismatch is found
        }

        // palindrome = *p2++ == *p-- ? true : palindrome;
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