// write a function named censor that modifies a string by replacing every occurrence of foo by xxx. 
// make the function as short as possible
#include <stdio.h>
#include <string.h>

void censor(char *str)
{
    char *p = str;
    int len = strlen(str);

    while ( p < str + len)
    {
        if (*p == 'f')
        {
            if (*(p + 1) == 'o' && *(p + 2) == 'o')
            {
                *p = 'x';
                *(p+1) = 'x';
                *(p+2) = 'x';
                p += 3; // maybe unecessary, but else the pointer will check p + 1 and p + 2 again
            }
        } 
        else
        {
            p++;
        }
        
    }
}

int main()
{
    char string[] = "food fool";
    censor(string);
    printf("%s", string);
    printf("\n");
}