#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
void handle_close(int file);
char *handle_buffer(char *file_name);
/**
 * main - main code to copy file to another file
 * @argc: the number of function arguments passed to main
 * @argv: each of the argument passed to main
 * Return: -1 on error else 1 to indicate success
 */
int main(int argc, char *argv[])
{
	char *take_buffer;
	int first_file, second_file, copy_contents, W;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	take_buffer = handle_buffer(argv[2]);
	first_file = open(argv[1], O_RDONLY);
	copy_contents = read(first_file, take_buffer, 1024);
	second_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (first_file == -1 || copy_contents == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(take_buffer);
			exit(98);
		}
		W = write(second_file, take_buffer, copy_contents);
		if (W == -1 || second_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(take_buffer);
			exit(99);
		}
		copy_contents = read(first_file, take_buffer, 1024);
		second_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (second_file > 0);
	free(take_buffer);
	handle_close(first_file);
	handle_close(second_file);
	return (0);
}

/**
 * handle_buffer - this function handles the buffer
 * @file_name: this represents the name of the file
 * passed to the argv
 * Return: char copied
 */
char *handle_buffer(char *file_name)
{
	char *BUFF;

	BUFF = malloc(sizeof(char) * 1024);
	if (!BUFF)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
	return (BUFF);
}

/**
 * handle_close - this function handles the close
 * @file: file to close
 */
void handle_close(int file)
{
	int clear;

	clear = close(file);
	if (clear == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}
