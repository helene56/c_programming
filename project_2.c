// see page 178 in book
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    int repeated[10] = {false};
    
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            if (repeated[digit] < 1)
            {
                repeated[digit] += 2;
            } else
            {
                repeated[digit]++;
            }
            
        }
            
        digit_seen[digit] = true;
        
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
        if (digit_seen[i] == 1 && repeated[i] == 0)
        {
            printf("%2d ", repeated[i]+1);
        } else
        {
            printf("%2d ", repeated[i]);
        }  
    }
    printf("\n");
}