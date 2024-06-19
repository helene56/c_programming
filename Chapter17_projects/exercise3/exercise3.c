#include <stdlib.h>
#include <stdio.h>

int *create_array(int n, int initial_value)
{
    int *p;
    p = malloc(n * sizeof(int));
    // initialize all values to initial_value
    if (p)
    {
        for (int i = 0; i < n; i++)
        {
            p[i] = initial_value;
        }
        return p;
    }
    else
    {
        return NULL;
    }
    
}