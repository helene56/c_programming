#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds)
{
    return (struct time) {.hours = total_seconds/3600, .minutes = total_seconds/60, .seconds = total_seconds};
}

int main()
{
    long total_seconds = 3600;
    struct time time1;


    time1 = split_time(total_seconds);
    printf("hours: %ld, minutes: %ld seconds: %ld\n", time1.hours, time1.minutes, time1.seconds);

}