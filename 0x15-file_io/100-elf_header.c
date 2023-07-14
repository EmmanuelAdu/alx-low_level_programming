#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program executes and prints the contents of an elf file
 * ElF file is an Executable and Linkable Format
 * @argc: this is the total no. of arguments to be passed to main
 * @argc: this refers to an array of each argument passed to main
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int OP;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file_name_elf>\n", argv[0]);
		return (1);
	}
	OP = open(argv[1], O_RDONLY);
	if (OP == -1)
	{
		dprintf(STDERR_FILENO, "Can't open %s. Not an ELF file\n", argv[1]);
		exit(98);
	}
}
