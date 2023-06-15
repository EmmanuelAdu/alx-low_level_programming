#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that returns a char to the stdout
 * @c: character passed as argument to function
 * Return: 1 on success and -1 on error and appropriately
 * set errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
