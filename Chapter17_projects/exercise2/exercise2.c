#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void * duplicate(char *string)
{
    char *p;
    size_t string_len = strlen(string);

    p = malloc(string_len + 1); // allocating memory for pointer p
    if (p) // if malloc does not return a null pointer
    {
        strcpy(p, string);
        printf("memory allocation succes\n");
        return p;
    }
    else
    {
        printf("memory allocation failed\n");
        return NULL;
    }

}

int main()
{
    char string[] = "hello";

    duplicate(string);
}