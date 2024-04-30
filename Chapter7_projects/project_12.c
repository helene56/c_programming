// see page 158 in book
#include <stdio.h>

int main()
{
    float number1;
    float number2;
    char operator;
    float result = 0;

    printf("Enter an expression: ");

    scanf("%f%c%f", &number1, &operator, &number2);

    if (operator == '+')
    {
       result = number1 + number2; 
    } else if (operator == '-')
    {
       result = number1 - number2; 
    } else if (operator == '/')
    {
      result = number1 / number2;  
    } else if (operator == '*')
    {
       result = number1 * number2; 
    }

    
    printf("%.2f\n", result);

}