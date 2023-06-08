#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - this function prints an argument or string in reverse
 * @s: the argument or string to print
 * Return: 0 when success
 */

void _print_rev_recursion(char *s)
{
	if (*s) /* this means while *s is not equal to null character i.e '\0' */
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	_putchar('\n');
}
