// suppose that program needs to display messages in either English, French or Spanish.
// using conditional compilation, write a program fragment that displays one of the following three messages depending on whether or nortthe specified macro is defined.

#if defined ENGLISH
    printf("Insert Disk 1");
#elif defined FRENCH
    printf("In");
#elif defined SPANISH
#endif

