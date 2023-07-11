#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - this function appends text to a file
 * @filename: name of the file to append a text
 * @text_content: content to write to file
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int OP; /* storing an open file */
	int len = 0;
	int R; /* storing a written a text to file */

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content[len] == '\0')
	{
		len++;
	}
	OP = open(filename, O_WRONLY | O_APPEND);
	R = write(OP, text_content, len);
	if (OP == -1 || R == -1)
	{
		return (-1);
	}
	close(OP);
	return (1);
}
