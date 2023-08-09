#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to a new string containing concatenated arguments,
 *         or NULL if ac == 0 or av == NULL or if it fails.
 */
char *argstostr(int ac, char **av)
{
    int i, j, len = 0, total_len = 0;
    char *concatenated;

    if (ac == 0 || av == NULL)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            len++;
            total_len++;
        }
        total_len++; // To account for the newline character
    }

    concatenated = malloc(sizeof(char) * total_len + 1);
    if (concatenated == NULL)
        return NULL;

    total_len = 0;
    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            concatenated[total_len] = av[i][len];
            len++;
            total_len++;
        }
        concatenated[total_len] = '\n';
        total_len++;
    }
    concatenated[total_len] = '\0';

    return concatenated;
}
