// see page 159 in book
#include <stdio.h>

int main()
{
    char sentence;
    int count = 0;
    int length = 0;
    float average = 0.0;
    printf("Enter a sentence: ");
    while ((sentence = getchar()) != '\n')
    {
        
        if (sentence != ' ')
        {
            length++;
        } else
        {
            count++; 
        }
        
    }
    count++;
    
    average = (float) length / count;


    printf("Average word lenght: %.1f \n", average);
}