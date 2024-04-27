// see page 178 in book
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int occured_digit[10] = {0};
    int digit;
    long n;
    char ch;
    

    printf("Enter a number: ");
    
    scanf("%ld", &n);

    check_number:
        for (int i = 0; i < 10; i++) 
        {
            occured_digit[i] = 0;
        }
        while (n > 0)
        {
            digit = n % 10;
            occured_digit[digit]++;
            n /= 10;
        }
        printf("Digit:\t\t");
        for (int i = 0; i < 10; i++)
        {
            printf("%2d ", i);
        }
        printf("\n");
        printf("Occurences:\t");
        for (int i = 0; i < 10; i++)
        {
            printf("%2d ", occured_digit[i]);
        }
        printf("\n");


    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n > 0)
    {
        goto check_number;
    }
    
}