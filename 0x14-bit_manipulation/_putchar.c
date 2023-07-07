#include <unistd.h>
#include "main.h"

/**
 * _putchar - this function prints a character to the stdout
 * @c: the character to print
 * Return: 1 else -1, and set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
