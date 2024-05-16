// write a program that accepts a date from the user in the form mm/dd/yyyy
// and then displays it in the form month dd, yyyy where month is the name of the month
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter a date (mm/dd/yyyy): ");
    char user_input[10 + 1];
    char *months[] = {"January", "February", "March", "April", 
                      "May", "Juni", "July", "August", 
                      "September", "October", "November", "December"};
    scanf("%s", user_input);
    
    char *p = user_input;
    char user_month[3];

   
    for (int i = 0; i < 2; i++)
    {
        user_month[i] = *p++;
        // char *user_month = month[] 
    }
    int month = atoi(user_month);

    char day_year[9];
    while (*p++ != '/');
    strcpy(p, day_year);
    


    printf("You entered the date %s %s", months[month], day_year);


    
}