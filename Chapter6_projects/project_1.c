// see page 122 in book
#include <stdio.h>

int main()
{
    float user_number;
    float largest_number = 0.0f;
    
    while (1) {
        
        printf("Enter a number: ");
        scanf("%f", &user_number);
        if (user_number <= 0) {
            printf("The largest number entered was %.2f\n", largest_number);
            break;
        }
        
        if (user_number > largest_number) {
            largest_number = user_number;
        }            
    }
    
}