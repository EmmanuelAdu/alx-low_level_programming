#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - this function is called  recursively to print an argument
 * @s: the character or argument passed to the function
 * Return: 0 on sucess
 */

void _puts_recursion(char *s)
{
	if (*s) /* this means as *s is not equal to null character */
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
