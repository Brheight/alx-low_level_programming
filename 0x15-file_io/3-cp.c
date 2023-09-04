#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int open_files(char *source_file, char *dest_file)
{
    int fd_from, fd_to;

    fd_from = open(source_file, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
        return 98;
    }

    fd_to = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
        close(fd_from);
        return 99;
    }

    return 0;
}

int copy_files(int fd_from, int fd_to)
{
    int read_result, write_result;
    char buffer[1024];

    while ((read_result = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        write_result = write(fd_to, buffer, read_result);
        if (write_result == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
            close(fd_from);
            close(fd_to);
            return 99;
        }
    }

    if (read_result == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
        close(fd_from);
        close(fd_to);
        return 98;
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close source file descriptor\n");
        return 100;
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close destination file descriptor\n");
        return 100;
    }

    return 0;
}

int main(int ac, char **av)
{
    int fd_from, fd_to, exit_code;

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
        return 97;
    }

    exit_code = open_files(av[1], av[2]);
    if (exit_code != 0)
        return exit_code;

    fd_from = exit_code;
    fd_to = exit_code;

    return copy_files(fd_from, fd_to);
}
