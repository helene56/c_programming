// see page 179 --- letters dont walk up or right right now but jumps around so gotta work on the condition where it checks if it is surrounded or not
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char random_walk[10][10];
    int position_memory[10][10] = {0};
    position_memory[0][0] = 1;
    int temp_array[2] = {0};
    bool program_on = true;
    int count = 0;
    int letter = 65;
    int direction_number;

    srand((unsigned) time(NULL));

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            random_walk[row][col] = '.';
        }

    }

    random_walk[0][0] = (letter + count);
    int i = 0;
    int m = 0;
    int j = 0;
    int current_row = 0;
    int current_col = 0;
    do
    {
        // calculate:
        printf("before cal, current row: %d current col: %d\n", current_row, current_col);
        direction_number = rand() % 4;

        switch (direction_number)
        {
        case 0: temp_array[0] = 0; temp_array[1] = -1; break;
        case 1: temp_array[0] = 0; temp_array[1] = 1; break;
        case 2: temp_array[0] = -1; temp_array[1] = 0; break;
        case 3: temp_array[0] = 1; temp_array[1] = 0; break;
        }
        
        // check if the random move is allowed
        m += temp_array[0];
        j += temp_array[1];

        if (position_memory[m][j-1] == 1 && position_memory[m][j+1] == 1 && position_memory[m-1][j] == 1 && position_memory[m-1][j] == 1 && position_memory[m+1][j] == 1) // check if the letter is surrounded on all sides
        {
            program_on = false;
            
        }

        if (position_memory[m][j] == 0 && m >= 0 && j >= 0 && m <= 9 && j <= 9) // move allowed: nothing beside it and not outside grid
        {
            current_row = m;
            current_col = j;
            if (count > 24)
            {
                program_on = false;
            }
            else
            {
                count++;
                position_memory[current_row][current_col] = 1;
                random_walk[current_row][current_col] = (letter + count);
            }
            
        }
        else
        {
            m = current_row;
            j = current_col;
        }
        printf("after cal, current row: %d current col: %d\n", current_row, current_col);

        printf("random_walk[10][10] = \n");
        for (int n = 0; n < 10; n++)
        {
            for (int i = 0; i < 10; i++)
            {
                printf("%c ", random_walk[n][i]);
            }
            printf("\n");

        }


    } while (program_on);

    

    
}

