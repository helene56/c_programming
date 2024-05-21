#include <stdbool.h>
#include <stdio.h>
struct date {
    int month;
    int day;
    int year;
};

int day_of_year(struct date d)
{
    //calculate if leapyear
    //if leapyear
    int total_days;
    int temp_february;
    bool leapyear = false;

    leapyear = (d.year % 400 == 0) ? 1 : (d.year % 100 == 0) ? 0 : (d.year % 4 == 0) ? 1 : 0;
    //02 month days = 29 total days = 366
    // else 02 month days = 28, total days = 365
    if (leapyear)
    {
        total_days = 366;
        temp_february = 29;
    }
    else
    {
        total_days = 365;
        temp_february = 28;
    }
  
    int days_in_month = 0;

    int month_days[] = {31, temp_february, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < d.month - 1; i++)
    {
        days_in_month += month_days[i];
    }

    int current_day = days_in_month + d.day;

    return current_day;
}


int main()
{
    struct date date1 = {3, 5, 2024};

    printf("the date is %d\n", day_of_year(date1));
    
}