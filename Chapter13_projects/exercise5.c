// a) write a function named capitalize that capitalizes all letters in its argument. the argument will be a null-terminated string containing arbitrary characters not just letters.
// b) rewrite the capitalize dunction, this time using pointer arithmetic to access the characters in the string.

void capitalize(char *str)
{
    int len = strlen(*str);
    for (int i = 0; i < len;)
    {
        str[i++] = toupper(str[i]);
    }
}

