#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - this function prints character to the standard output
 * @c: the character or argument passed to the function
 * Return: 1 on success else -1 on error and sets the errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
