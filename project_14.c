// see page 180 in book
#include <stdio.h>

// todo
// 1. read input and store in char[n] - løst
// 2. stop at '.' and store in seperate char variable - løst
// 3. start from the input from 1. and print the words from the back
// 4. print '.'


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
    // printf("%c", ch);

    // for (int i = 0; i < len_var; i++)
    // {
    //     printf("%c", user_input[i]);

    // }
    // printf("\n");

    for (int i = len_var; i > -1; i--)
    {

        printf("%c", user_input[i]);
    
    }
    printf("\n");


}