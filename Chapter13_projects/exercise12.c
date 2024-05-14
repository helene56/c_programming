// write the following function:
void get_extension(const char *file_name, char *extension);
// file_name points to a string containing a file name. the function should store the extension on the file name in the string pointed to by extension.
// if the file name does not have an extension the function should store an empty string (a single null character) in the string pointed to by extention.
#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension)
{
    const char *p = file_name;
    int len = strlen(file_name);

    while (*p++ != '.' && p < file_name + len)
    {
        
        if (*(p++) == '.')
        {
            strcpy(extension, p);
            return;
        }
        
        
        strcpy(extension, "");
        
    }
    
    

}

int main()
{
    char file[] = "memoe.txt";
    char extension[] = "";
    get_extension(file, extension);
    printf("file: %s extension: %s\n", file, extension);

}