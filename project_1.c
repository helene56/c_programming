// see page 178 in book
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    bool repeated[10] = {false};
    

    printf("Enter a number:  ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            repeated[digit] = true;
        }
            
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i++)
    {
        if (repeated[i] == 1)
        {
            printf(" %d", i);
        }
        
    }
    printf("\n");
    
        

}