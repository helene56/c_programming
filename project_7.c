// see page 179 in book
#include <stdio.h>

int main()
{
    int user_row[25];
    int count = 0;
    int row_total[5] = {0};
    int col_total[5] = {0};
    int tot[5][5] = {0};

    for (int i = 0; i < 5; i++)
    { 
        printf("Enter row %d: ", i+1);
        for (int n = 0; n < 5; n++)
        {
            scanf("%d", &user_row[count]);
            row_total[i] += user_row[count];
            col_total[n] += user_row[count];
            count++;
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", row_total[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", col_total[i]);
    }
    printf("\n");
  
}