#include <stdio.h>
#include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main()
{
    int day_of_year = 32;
    int year = 2024;
    int month;
    int day;

    
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_of_monts[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // The leap year can be determined by checking if the year is divisible by 4, not divisible by 100 unless also divisible by 400.
    bool is_leap_year = false;
    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 == 0)
        {
            is_leap_year == true;

        }
        else if (year % 100 != 0)
        {
            is_leap_year == true;
        }
    }

    if (is_leap_year)
    {
        days_of_monts[1] += 1;
    }
    int temp = 0;
    for (int i = 0; i < 12; i++)
    {
        if (days_of_monts[i] + temp > day_of_year)
        {
            *month = i+1;  // Set the value at the memory address 'month' points to, to 'i+1'
            break;
        }
        else
        {
            temp += days_of_monts[i];
        }
    }

    *day = temp - day_of_year;
}