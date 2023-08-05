#include <stdio.h>

void _puts(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
}
