// see page 239 in book
// to do
// write a function that prompt the user for a number then display the number using characters to simulate the effect of a seven segment display
#include <stdio.h>

#define MAX_DIGITS 10

char digits[4][MAX_DIGITS * 4];
int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                       {0, 1, 1, 0, 0, 0, 0},
                       {1, 1, 0, 1, 1, 0, 1},
                       {1, 1, 1, 1, 0, 0, 1},
                       {0, 1, 1, 0, 0, 1, 1},
                       {1, 0, 1, 1, 0, 1, 1},
                       {1, 0, 1, 1, 1, 1, 1},
                       {1, 1, 1, 0, 0, 0, 0},
                       {1, 1, 1, 1, 1, 1, 1},
                       {1, 1, 1, 1, 0, 1, 1}};

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main()
{
    printf("Enter a number: ");
}

void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
        {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    switch (digit)
    {
    case 0: digits[0][1 + position * 4] = '_'; digits[1][2 + position * 4] = '|'; digits[2][2 + position * 4] = '|'; digits[2][1 + position * 4] = '_'; digits[2][0 + position * 4] = '|'; digits[1][0 + position * 4] = '|';
    }
}

void print_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
        {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}