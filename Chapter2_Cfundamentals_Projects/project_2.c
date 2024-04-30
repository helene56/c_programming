// write a program that computes the volume of sphere

#include <stdio.h>

int main()
{

    int radius;
    float pi = 3.14f;
    printf("enter radius: ");
    scanf("%d", &radius);
    float radius_power_3 = radius * radius * radius;
    float volume = 4.0f/3.0f*pi*radius_power_3;
    printf("the volume of a sphere with a radius of %d is %.2f\n", radius, volume);
}