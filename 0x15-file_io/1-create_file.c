#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the name of the file
 * @text_content: the content to append to file created
 * Return: 1 for success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wt;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	wt = write(op, text_content, i);
	if (wt == -1)
		return (-1);
	close(op);
	return (1);
}
