#include <stdio.h>

void puts2(char *str)
{
    if (str == NULL)
        return;

    int i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i += 2;
    }
    putchar('\n');
}
