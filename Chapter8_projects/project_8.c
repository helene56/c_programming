// see page 179 in book --- skal nok undersøge eksempel nærmere da denne version bliver utrolig lang..
#include <stdio.h>

int main()
{
    int user_row[25];
    int count = 0;
    int total_score_row[5] = {0};
    int average_quiz_score[5] = {0}, high_quiz_score[5] = {0}, low_quiz_score[5] = {0};

    printf("Enter five quiz grades seperated by space\n");

    for (int i = 0; i < 5; i++)
    { 
        
        printf("Student %d: ", i+1);
        for (int n = 0; n < 5; n++)
        {
            scanf("%d", &user_row[count]);

            total_score_row[i] += user_row[count];
            average_quiz_score[n] += user_row[count];
            
            if (high_quiz_score[n] < user_row[count])
            {
               high_quiz_score[n] = user_row[count]; 
            }

            if (count < 5)
            {
                low_quiz_score[n] = user_row[count];
            } else
            {
                if (low_quiz_score[n] > user_row[count])
                {
                    low_quiz_score[n] = user_row[count]; 
                }
            }
            count++;
        }
    }

    printf("Total student scores: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", total_score_row[i]);
    }
    printf("\n");

    printf("Average student scores: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", total_score_row[i]/5);
    }
    printf("\n");

    printf("Average quiz score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", average_quiz_score[i]);
    }
    printf("\n");

    printf("Quiz high score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", high_quiz_score[i]);
    }
    printf("\n");

    printf("Quiz low score: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", low_quiz_score[i]);
    }
    printf("\n");

}