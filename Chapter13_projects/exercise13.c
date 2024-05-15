// write the following function:
void build_index_url(const char *domain, char *index_url);
// domain points to a string containing an Internet domain (knking.com). the function should add http://www. to the beginning of this string and /index.html to the end,
// storing the result in the string pointed to by index_url
#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url)
{
    const char *p = domain;
    strcpy(index_url, "http://www.");
    strcat(strcat(index_url, p), "/index.html");
}

int main()
{
    char string[] = "knking.com";
    char result[50] = "";
    build_index_url(string, result);
    printf(result);
    printf("\n");
}
