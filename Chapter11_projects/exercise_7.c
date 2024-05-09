#include <stdio.h>
#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main()
{
    int day_of_year = 143;
    int year = 2024;
    int month;
    int day;

    split_date(day_of_year, year, &month, &day);

    printf("year: %d, month: %d, day: %d\n", year, month, day);
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_of_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // The leap year can be determined by checking if the year is divisible by 4, not divisible by 100 unless also divisible by 400.
    bool is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    
    if (is_leap_year)
    {
        days_of_months[1] += 1;
    }

    int days_passed = 0;
    for (int i = 0; i < 12; i++)
    {
        
        days_passed += days_of_months[i];
        
        if (days_passed > day_of_year)
        {
            *month = i + 1;  // Set the value at the memory address 'month' points to, to 'i+1'
            *day = day_of_year - (days_passed - days_of_months[i]); // set the day
            break;
        }
    }
}