#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

void handle_magic(const uint8_t *assign_magic);
void check_elf(const uint8_t *magic);
void close_elf(int elf);

/**
 * main - this program executes and prints the contents of an elf file
 * ElF file is an Executable and Linkable Format
 * @argc: this is the total no. of arguments to be passed to main
 * @argv: this refers to an array of each argument passed to main
 * Return: 1 on success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int OP, r;
	const uint8_t assign_magic[] = {0x7F, 'E', 'L', 'F'};

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file_name_elf>\n", argv[0]);
		return (1);
	}
	OP = open(argv[1], O_RDONLY);
	if (OP == -1)
	{
		dprintf(STDERR_FILENO, "Can't open %s. Error opening file.\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(OP);
		dprintf(STDERR_FILENO, "Can't read %s. Error opening file.\n", argv[1]);
		exit(98);
	}
	r = read(OP, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(OP);
		dprintf(STDERR_FILENO, "Error: Cant read %s\n", argv[1]);
		exit(98);
	}
	check_elf(assign_magic);
	printf("ELF Header:\n");
	handle_magic(assign_magic);
	close(OP);
	return (0);
}
/**
 * handle_magic - handles the magic
 * @assign_magic: points directly to the values in the magic_prototype
 */
void handle_magic(const uint8_t *assign_magic)
{
	int l = 0;

	printf("Magic: ");
	for (l = 0; l < 4; l++)
	{
		printf("%02x ", assign_magic[l]);
	}
	printf("\n");
}
/**
 * check_elf - this check if file is an elf file
 * @magic: pointer to the values in the magic_prototype
 */
void check_elf(const uint8_t *magic)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (magic[i] != 0x7F &&
			magic[i] != 'E' &&
			magic[i] != 'L' &&
			magic[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: FILE not an ELF FILE\n");
			exit(98);
		}
	}
}
/**
 * close_elf - this function closes opened file
 * @elf: the file that was opened
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close  file %d\n", elf);
		exit(98);
	}
}
