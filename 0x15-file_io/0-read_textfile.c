#include "main.h"

/**
 * read_textfile - this function reads the text file
 * @filename: the name of the file
 * @letters: the number of letters to read
 * Return: the number of letters read, else -1, or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op; /* passed to the open system call */
	ssize_t rd; /* passed to read system call */
	char *buffer = NULL;
	ssize_t wt; /* actual no.of bytes written */

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	rd = read(op, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(op);
	return (wt);
}
