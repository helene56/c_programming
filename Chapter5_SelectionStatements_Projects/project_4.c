// write a project that ask the user for the wind speed, then display the correct description

#include <stdio.h>

int main()
{   
    int wind_speed;

    printf("Enter wind speed in knots: \n");
    scanf("%d", &wind_speed);

    if (wind_speed < 1){
        printf("Calm\n");
    } else if (wind_speed < 4) {
        printf("Light air\n");
    } else if (wind_speed < 28) {
        printf("Breeze\n");
    }
}