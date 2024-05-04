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

int digit_pos[7][2] = {{0, 1},
                       {1, 2},
                       {2, 2},
                       {2, 1},
                       {2, 0},
                       {1, 0},
                       {1, 1}};

char ch = ' ';

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main()
{
    int position = 0;
    char user_input;
    clear_digits_array();
    printf("Enter a number: ");
    while ((user_input = getchar()) != '\n')
    {
        
        process_digit(user_input - '0', position);
        position += 4;
        
    }
    print_digits_array();

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
    for (int i = 0; i < 7; i++)
    {
        if (segments[digit][i])
        {
            if (i == 0 || i == 3 || i == 6)
            {
                ch = '_';
            }
            else
            {
                ch = '|';
            }
            int first_pos = digit_pos[i][0];
            int second_pos = digit_pos[i][1];
            // printf("i: %d\n", i);
            // printf("first pos: %d\n", first_pos);
            // printf("second pos: %d\n", second_pos);

            digits[first_pos][second_pos+position] = ch;
        }
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