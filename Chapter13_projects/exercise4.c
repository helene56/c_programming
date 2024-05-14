// modify read_line function in each of the following ways
// a) have it skip white space before beginning to store input characters
// b) have it stop reading at the first white-space character
// c) have it stop reading at the first new-line character then store the new-line character in the string
// d) have it leave behind characters that it doesn't have room to store
#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
    
        if (i < n)
        {
            str[i++] = ch;
            
        }
    }
    str[i] = '\n';
    str[++i] = '\0';
    return i;
}


int main()
{
    char userInput;
    char array[10];
    int n = 10;

    printf("Enter a sentence: ");

    printf("%d", read_line(array, n));
    printf("\n");
    
}