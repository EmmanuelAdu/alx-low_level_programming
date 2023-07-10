#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - this function reads a text file and prints to the POSIX
 * @filename: this is the file to read and print from
 * @letters: the number of letters it should read and print
 * Return: number of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*
	 *declaring a variable to store the characters
	 */
	char *BUFF;
	ssize_t READ; /* this stores the read character */
	ssize_t	WRITE; /* STORES WRITE */
	ssize_t OP; /* STORES THE OPEN FILE */

	OP = open(filename, O_RDONLY);
	if (OP == -1)
	{
		return (0);
	}
	BUFF = malloc(sizeof(char) * letters);
	READ = read(OP, BUFF, letters); /* reading no.of letters to open file BUF */
	WRITE = write(STDOUT_FILENO, BUFF, READ); /* writing read file to output */
	free(BUFF);
	close(OP);
	return (WRITE);
}
