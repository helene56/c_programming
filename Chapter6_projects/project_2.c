// see page 122 in book
#include <stdio.h>

int main()
{
    int a;
    int b;
    int result;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    do {
        result = a % b;
        a = b;
        b = result; 
    } while (result != 0);
    printf("Greatest common divisor: %d\n", a);
    

}