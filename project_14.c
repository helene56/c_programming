// see page 180 in book
#include <stdio.h>

// todo
// 1. read input and store in char[n] - løst
// 2. stop at '.' and store in seperate char variable - løst
// 3. start from the input from the last word from 1. and print then search for the next last word
// 4. print '.' - løst


int main()
{
    char ch;
    int len = 50;
    int len_var = 0;
    char user_input[len];

    printf("Enter a sentence: \n");
    while ((ch = getchar()) != '\n' && ch != '!' && ch != '.' && ch != '?')
    {
        user_input[len_var] = ch;
        len_var++;
    }
    
    for (int i = len_var; i > -1; i--)
    {

        printf("%c", user_input[i]);
    
    }
    printf("\n");


}