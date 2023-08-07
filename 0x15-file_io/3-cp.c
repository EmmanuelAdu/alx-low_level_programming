#include "main.h"

/**
 *error_file - function to print and exit when error occurs
 *@buf: the allocated memory to free
 *@filename: pointer to the filename
 */
void error_file(char *buf, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	free(buf);
	exit(98);
}


/**
 * create_memory - this function allocates memory
 * @filename: the file to create the memory for
 * Return: the allocated memory
 */
char *create_memory(char *filename)
{
	char *file;

	file = malloc(sizeof(char) * 1024);
	if (file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (file);
}


/**
 * file_close - this function closes opened file
 * @file: the return value when a file successfully opens
 */
void file_close(int file)
{
	int a;

	a = close(file);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}


/**
 * main - this is the main program
 * @argc: the no. of arguments passed to main
 * @argv: an array of strings passed as argument to main
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int op_from; /* passed to first file argument */
	int op_to; /* passed to second file argument */
	int rd, wt; /* passed to read and write system call resp. */
	char *buf = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	op_from = open(argv[1], O_RDONLY);
	buf = create_memory(argv[2]);
	op_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rd > 0)
	{
		rd = read(op_from, buf, 1024);
		if (op_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wt = write(op_to, buf, rd);
		if (wt == -1 || op_to == -1)
		{
			error_file(buf, argv[2]);
		}
		rd = read(op_from, buf, 1024);
		op_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	file_close(op_from);
	file_close(op_to);
	return (0);
}
