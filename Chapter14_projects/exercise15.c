// suppose that program needs to display messages in either English, French or Spanish.
// using conditional compilation, write a program fragment that displays one of the following three messages depending on whether or nortthe specified macro is defined.
#include <stdio.h>
#define ENGLISH


int main()
{
    #if defined ENGLISH
        printf("Insert Disk 1\n");
    #elif defined FRENCH
        printf("Inserez Le Disque 1\n");
    #elif defined SPANISH
        printf("Inserte El Disco 1\n");
    #endif
}
