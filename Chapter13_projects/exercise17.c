#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// write the following function:
bool test_extension(const char *file_name, const char *extension);
// file_name points to a string containing a file name. The function should return true if the files's extension matches the string pointed to by extension.
// incorporate the "search for the end of a string" idiom into your function.


bool test_extension(const char *file_name, const char *extension)
{
    const char *p = file_name;

    while (*p)
    {
        if (*p++ == '.');
        if (strcmp(p, extension))
        {
            return true;
        }
        else
        {
            return false;

        }
        p++;
        
    }
}
