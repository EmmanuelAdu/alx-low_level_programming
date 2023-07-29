#include "main.h"

/**
 *close_elf - Closes an ELF file.
 *@elf: The file descriptor of the ELF file.
 *Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 *elf_check - to check if a file is an ELF file
 *@e_ident: A pointer to an array containing the ELF magic numbers
 */
void elf_check(unsigned char *e_ident)
{
	int ptr; /*serves as loop */

	for (ptr = 0; ptr < 4; ptr++)
	{
		if (e_ident[ptr] != 127 &&
				e_ident[ptr] != 'E' &&
				e_ident[ptr] != 'L' &&
				e_ident[ptr] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 *abi_p - prints the ABI version of an ELF header
 *@e_ident: pointer to an array containing elF ABI version
 */
void abi_p(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 *magic_pr - this function the magic numbers of an ELF header
 *@e_ident: A pointer to an array containing the ELF magic numbers
 *Description: Magic numbers are separated by spaces
 */
void magic_pr(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
