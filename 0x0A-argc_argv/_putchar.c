#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - this function prints a character to
 * the standard output
 * @c: the character to be printed to stdout
 * Return: on success 1, else -1 on error and set errno appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
