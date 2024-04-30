// see page 158 in book
#include <stdio.h>

int main()
{
    char vowel;
    int count;
    printf("Enter a sentence: ");

    while ((vowel = getchar()) != '\n')
    {
        switch (vowel)
        {
        case 'a': case 'e': case 'i': case 'o': case 'u': count++; break;
        }
    }
    printf("Your sentence contains %d vowels.\n", count);


}