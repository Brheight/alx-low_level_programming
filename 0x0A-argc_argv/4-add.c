#include <stdio.h>
#include <stdlib.h>

int is_positive_number(char *str)
{
	int i = 0;
	char c;

	while ((c = str[i]))
	{
		if (c < '0' || c > '9')
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
