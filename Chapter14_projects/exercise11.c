// write a macro named ERROR that generates the call of fprintf whown above when given a format string and the items to be displayed
#include <stdio.h>

#define ERROR(string, ...) (fprintf(stderr, (string), __VA_ARGS__))

int main()
{
    int index = 1;
   
    ERROR("Range error: index = %d\n", index);
}