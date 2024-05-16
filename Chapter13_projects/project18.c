// write a program that accepts a date from the user in the form mm/dd/yyyy
// and then displays it in the form month dd, yyyy where month is the name of the month
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a date (mm/dd/yyyy): ");
    char user_input[20];
    char *months[] = {"January", "February", "March", "April", 
                      "May", "Juni", "July", "August", 
                      "September", "October", "November", "December"};
    scanf("%s", user_input);
    
    char *p = user_input;
    while (*user_input)
    {
        
    }
}