#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 if incorrect argument
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	main_opcode = (char *)&main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_opcode[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
