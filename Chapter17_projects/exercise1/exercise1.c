#include <stdio.h>
#include <stdlib.h>  // Include this header for malloc

void * my_malloc(int n_byte)
{
    void *p = malloc(n_byte);
    if (p) // if malloc is not equal to null
    {
        printf("malloc is valid\n");
        return p;
    }
    else
    {
        printf("malloc returns a null pointer\n");
        return NULL;
    }
}

int main()
{
    int n = 1000;
    my_malloc(n);
}