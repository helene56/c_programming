// write a program fhat finds the "smallest" and "largest" in a series of words. 
// after the user enters the words, the program will determine which words would come first and last if the words were listed in dictionary order.
// the program must stop axxepting input ehrn the user enters a four-letter word.
// assume that no word is more than 20 letters long.

#include <stdio.h>
#include <string.h>

void compare_strings(char *largest_string, char *smallest_string);

int main()
{
    char smallest[20];
    char largest[20];
    char userInput[20];
    int user_len = strlen(userInput);
    
    while (user_len != 4)
    {
        printf("Enter word: ");
        scanf("%s", userInput);
        user_len = strlen(userInput);
        printf("%d\n", user_len);
    }

}

void compare_strings(char *largest_string, char *smallest_string)
{

}
