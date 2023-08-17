#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/* Function to get the appropriate operator function */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	fprintf(stderr, "Error\n");
	exit(99);
}
