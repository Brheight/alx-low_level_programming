#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
        i++;
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
    int i, j, k, words, len;
    char **array;

    if (str == NULL || *str == '\0')
        return NULL;

    words = count_words(str);

    if (words == 0)
        return NULL;

    array = malloc(sizeof(char *) * (words + 1));
    if (array == NULL)
        return NULL;

    i = 0;
    while (i < words)
    {
        while (*str == ' ')
            str++;

        len = 0;
        while (str[len] != ' ' && str[len] != '\0')
            len++;

        array[i] = malloc(sizeof(char) * (len + 1));
        if (array[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(array[j]);
            free(array);
            return NULL;
        }

        for (k = 0; k < len; k++)
            array[i][k] = *str++;

        array[i][k] = '\0';
        i++;
    }

    array[i] = NULL;
    return array;
}
