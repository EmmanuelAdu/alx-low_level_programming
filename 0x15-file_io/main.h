#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void magic_pr(unsigned char *e_ident);
void data_p(unsigned char *e_ident);
void version_p(unsigned char *e_ident);
void abi_p(unsigned char *e_ident);
void class_pr(unsigned char *e_ident);
void osabi_p(unsigned char *e_ident);
void type_p(unsigned int e_type, unsigned char *e_ident);
void entry_p(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
void elf_check(unsigned char *e_ident);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void handle_close(int file);
#endif
