// write a program that accepts a date from the user in the form mm/dd/yyyy
// and then displays it in the form month dd, yyyy where month is the name of the month
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// note: could have used scanf(%d / %d / %d", &m, &d, &y) as it would have input the entered data in this format.
// note: then i could have used a single printf statement:  printf("You entered the date %s %.2d, %d\n", months[m-1], d, y);
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
    }

    int month = atoi(user_month) - 1;

    printf("You entered the date %s ", months[month]);
    while (*p != '/')
    {
        printf("%c", *p);
        p++;
    }
    printf(",");
    p++;
    printf(" %s\n", p);
}