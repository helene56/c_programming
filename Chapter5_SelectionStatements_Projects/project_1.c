// write a project that calculates how many digits a number contains

#include <stdio.h>

int main()
{
    int number;
    int digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (0 <= number && number <= 9) {
        digit = 1;
    } else if (10 <= number && number <= 99) {
        digit = 2;
    } else if (100 <= number && number <= 999) {
        digit = 3;
    } else if (1000 <= number && number <= 9999){
        digit = 4;
    } else {
        digit = -1;  
    }

    if (digit == -1) {
        printf("The number %d has more than 4 digits\n", number);
    } else {
      printf("The number %d has %d digits\n", number, digit);  
    }

    
}