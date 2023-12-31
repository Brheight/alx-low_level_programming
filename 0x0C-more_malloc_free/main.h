#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_positive_number(char *str);
int _strlen(char *str);
void perform_multiplication(char *num1, char *num2, int len1, int len2, int *result);

#endif /* MAIN_H */
