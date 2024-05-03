// see page 239 in book
// to do
// write a function that prompt the user for a number then display the number using characters to simulate the effect of a seven segment display
#include <stdio.h>

#define MAX_DIGITS 10

int digits[4][MAX_DIGITS * 4];
int segments[10][7]; // mangler at udfylde

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main()
{
    printf("Enter a number: ");
}