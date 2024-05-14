// a) write a function named capitalize that capitalizes all letters in its argument. the argument will be a null-terminated string containing arbitrary characters not just letters.
// b) rewrite the capitalize dunction, this time using pointer arithmetic to access the characters in the string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char *str)
{
    int len = strlen(str);
    char *p = str;
    while (p < str + len)
    {
        *p++ = toupper(*p);
    }
}

int main()
{
    char string[] = "abc";
    capitalize(string);
    printf("%s", string);
    printf("\n");
}