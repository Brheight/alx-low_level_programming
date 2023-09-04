#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void print_elf_header(const char *filename);
const char *get_elf_class(unsigned char ei_class);
const char *get_elf_data(unsigned char ei_data);
const char *get_os_abi(unsigned char ei_osabi);
const char *get_elf_type(uint16_t e_type);
int open_files(char *source_file, char *dest_file);
int copy_files(int fd_from, int fd_to);

#endif /* MAIN_H */
