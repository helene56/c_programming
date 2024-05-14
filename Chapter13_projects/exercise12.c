// write the following function:
void get_extension(const char *file_name, char *extension);
// file_name points to a string containing a file name. the function should store the extension on the file name in the string pointed to by extension.
// if the file name does not have an extension the function should store an empty string (a single null character) in the string pointed to by extention.
#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension)
{
    const char *p = file_name;
    int len = strlen(*file_name);

    while (*p++ != '.' && p < file_name + len)
    {
        strcpy(file_name, p);
    }
    if (*++p == '.')
    {
        while (*p++ != '\0')
        {
            strcpy(extension, p);
        }
    }
    else
    {
        strcpy(extension, "\0");
    }

}