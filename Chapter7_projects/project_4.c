// see page 157 in book
#include <stdio.h>

int main()
{
    //int user_input = 0;
    int ch; // Variable to store each character read
    //int digit = 0;
    printf("Enter phone number: ");
    
    while ((ch = getchar()) != '\n') 
    {
        
        switch (ch)
        {
            case 'A': case 'B': case 'C': putchar('2'); break;
            case 'D': case 'E': case 'F': putchar('3'); break;
            case 'G': case 'H': case 'I': putchar('4'); break;
            case 'J': case 'K': case 'L': putchar('5'); break;
            case 'M': case 'N': case 'O': putchar('6'); break;
            case 'P': case 'R': case 'S': putchar('7'); break;
            case 'T': case 'U': case 'V': putchar('8'); break;
            case 'W': case 'X': case 'Y': putchar('9'); break;
            default: putchar(ch); break;
        }
    
        
    }
    printf("\n");

    
}