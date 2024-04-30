// see page 180 in book
#include <stdio.h>
// todo
// 1. read input and store in char[n] - løst
// 2. stop at '.' and store in seperate char variable - løst
// 3. start from the input from the last word from 1. and print then search for the next last word - løst
// 4. print '.' - løst

#define MAX_VALUE 100

int main()
{
    
    char ch = '.'; 
    int len_var = 0;
    char user_input[MAX_VALUE] = {0};
    
    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n' && ch != '!' && ch != '.' && ch != '?' && len_var < MAX_VALUE - 1)
    {
        user_input[len_var] = ch;
        len_var++;
    }
    printf("Reversal of sentence: ");
    int space_num = len_var;

    for (int i = len_var - 1; i >= 0; i--)
    {
        if (user_input[i] == ' ')
        {
            for (int n = i+1; n < space_num; n++)
            {
                printf("%c", user_input[n]);    
            }
            space_num = i;
            printf(" ");
        }
    
    }

    if (space_num != 0)
    {
        for (int j = 0; j < space_num; j++)
        {
            printf("%c", user_input[j]);
        }
    }
    printf("%c", ch);
    printf("\n");
}