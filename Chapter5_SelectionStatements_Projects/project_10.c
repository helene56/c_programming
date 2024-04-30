// write a project that uses the switch statement to convert a numerical grade into a letter grade

#include <stdio.h>

int main()
{
    int grade;
    int digit_1;
    int digit_2;
    printf("enter numerical grade: \n");
    scanf("%d", &grade);
    digit_1 = grade / 10;
    digit_2 = grade % 10;
    
    switch (digit_1) {
        case 10: case 9: printf("letter grade: A\n"); break;
        case 8: printf("letter grade: B\n"); break;
        case 7: printf("letter grade: C\n"); break;
        case 6: printf("letter grade: D\n"); break;
        case 5: case 4: case 3: case 2: case 1: printf("letter grade: F\n"); break;
    }

}