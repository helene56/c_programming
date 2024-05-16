// write a program named reverse.c that echoes its command-line arguments in reverse order. running the program by typing:
// reverse void and null
// should produce the following output:
// null and void

#include <stdio.h>

// argc(argument count) is the number of command-line arguments, argv(argument vector) is an array of pointers to the command-line arguments which are stored in string form
int main(int argc, char *argv[])
{
    // int i;
    // for (i = 1; i < argc; i++)
    // {
    //     printf("%s\n", argv[i]);
    // }
    // printf("%d", argc);
    printf("%s ", argv[3]);
    printf("%s ", argv[2]);
    printf("%s\n", argv[1]);
}