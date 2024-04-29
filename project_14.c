// see page 180 in book
#include <stdio.h>

// todo
// 1. read input and store in char[n]
// 2. stop at '.' and store in seperate char variable
// 3. start from the input from 1. and print the words from the back
// 4. print '.'


int main()
{
    char user_input[11];
    int num = sizeof(user_input) / sizeof(user_input[0]);
    char ch;

    printf("Enter a sentence: \n");
    // while ((ch = getchar()) != '\n');

    for (int n = 0; n < 11; n++)
    {
        scanf("%c", &user_input[n]);
    }
    
    
    printf("%d", num);

    for (int i = 0; i < 11; i++)
    {
        printf("%c", user_input[i]);
    }
    printf("\n");
    

}