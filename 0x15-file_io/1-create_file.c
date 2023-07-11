#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file -this function creates a file and writes content to it
 * @filename: the name of the file created
 * @text_content: the content to copy to file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int OP; /* storing the file created */
	int len = 0;
	int R; /* storing the text_content written to the file */

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	OP = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	R = write(OP, text_content, len);
	if (OP == -1 || R == -1)
	{
		return (-1);
	}
	close(OP);
	return (1);
}
