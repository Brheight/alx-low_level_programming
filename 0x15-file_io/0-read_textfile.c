#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads and prints a text file to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         0 if the file cannot be opened or read, or if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || (size_t)write_bytes != (size_t)read_bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (read_bytes);
}
