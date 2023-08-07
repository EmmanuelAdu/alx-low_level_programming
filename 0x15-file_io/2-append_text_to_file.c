#include "main.h"

/**
 * append_text_to_file - this function appends a text to a file
 * @filename: the name of file to append the text
 * @text_content: the text content to append to file
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wt;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, i);
	if (op == -1 || wt == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
