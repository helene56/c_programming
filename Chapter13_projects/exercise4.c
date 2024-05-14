// modify read_line function in each of the following ways
// a) have it skip white space before beginning to store input characters
// b) have it stop reading at the first white-space character
#include <stdio.h>

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
    str[i] = '\0';
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