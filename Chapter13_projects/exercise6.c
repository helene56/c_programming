// write a function named censor that modifies a string by replacing every occurrence of foo by xxx. 
// make the function as short as possible
#include <stdio.h>
#include <string.h>

void censor(char *str)
{
    char *p = str;
    int len = strlen(str);

    while ( p < str + len) // another option was to use p + 2 != '\0' as every string contains this at the end, making len unessecary
    {
        if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
        {
            *p = *(p+1) = *(p+2) = 'x';
            p += 3; // maybe unecessary, but else the pointer will check p + 1 and p + 2 again
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