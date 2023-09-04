#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: 0 on success, or 98 on error.
 */
int main(int ac, char **av)
{
    int fd, read_result;
    Elf64_Ehdr elf_header;

    if (ac != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
        exit(98);
    }

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", av[1]);
        exit(98);
    }

    read_result = read(fd, &elf_header, sizeof(elf_header));
    if (read_result == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", av[1]);
        close(fd);
        exit(98);
    }

    if (read_result != sizeof(elf_header) ||
        elf_header.e_ident[EI_MAG0] != 0x7f ||
        elf_header.e_ident[EI_MAG1] != 'E' ||
        elf_header.e_ident[EI_MAG2] != 'L' ||
        elf_header.e_ident[EI_MAG3] != 'F')
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", av[1]);
        close(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", elf_header.e_ident[i], (i < EI_NIDENT - 1) ? ' ' : '\n');

    printf("  Class:                             %s\n", get_elf_class(elf_header.e_ident[EI_CLASS]));
    printf("  Data:                              %s\n", get_elf_data(elf_header.e_ident[EI_DATA]));
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", get_os_abi(elf_header.e_ident[EI_OSABI]));
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", get_elf_type(elf_header.e_type));
    printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
    return (0);
}

/**
 * get_elf_class - Get the ELF class (32-bit or 64-bit) as a string.
 * @ei_class: The ELF class from the ELF header.
 *
 * Return: A string representing the ELF class.
 */
const char *get_elf_class(unsigned char ei_class)
{
    switch (ei_class)
    {
        case ELFCLASS32:
            return "ELF32";
        case ELFCLASS64:
            return "ELF64";
        default:
            return "<unknown>";
    }
}

/**
 * get_elf_data - Get the ELF data encoding (endianess) as a string.
 * @ei_data: The ELF data encoding from the ELF header.
 *
 * Return: A string representing the ELF data encoding.
 */
const char *get_elf_data(unsigned char ei_data)
{
    switch (ei_data)
    {
        case ELFDATA2LSB:
            return "2's complement, little endian";
        case ELFDATA2MSB:
            return "2's complement, big endian";
        default:
            return "<unknown>";
    }
}

/**
 * get_os_abi - Get the OS/ABI as a string.
 * @ei_osabi: The OS/ABI from the ELF header.
 *
 * Return: A string representing the OS/ABI.
 */
const char *get_os_abi(unsigned char ei_osabi)
{
    switch (ei_osabi)
    {
        case ELFOSABI_NONE:
            return "UNIX - System V";
        case ELFOSABI_HPUX:
            return "HP-UX";
        case ELFOSABI_NETBSD:
            return "NetBSD";
        case ELFOSABI_LINUX:
            return "Linux";
        case ELFOSABI_SOLARIS:
            return "Solaris";
        case ELFOSABI_AIX:
            return "AIX";
        case ELFOSABI_IRIX:
            return "IRIX";
        case ELFOSABI_FREEBSD:
            return "FreeBSD";
        case ELFOSABI_TRU64:
            return "Tru64";
        case ELFOSABI_MODESTO:
            return "Modesto";
        case ELFOSABI_OPENBSD:
            return "OpenBSD";
        case ELFOSABI_ARM_AEABI:
            return "ARM EABI";
        default:
            return "<unknown>";
    }
}

/**
 * get_elf_type - Get the ELF file type as a string.
 * @e_type: The ELF file type from the ELF header.
 *
 * Return: A string representing the ELF file type.
 */
const char *get_elf_type(uint16_t e_type)
{
    switch (e_type)
    {
        case ET_NONE:
            return "NONE (Unknown)";
        case ET_REL:
            return "REL (Relocatable file)";
        case ET_EXEC:
            return "EXEC (Executable file)";
        case ET_DYN:
            return "DYN (Shared object file)";
        case ET_CORE:
            return "CORE (Core file)";
        default:
            return "<unknown>";
    }
}
