#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: the character to print
 * Return: 1 to the stdout
 * else -1 on error,and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
