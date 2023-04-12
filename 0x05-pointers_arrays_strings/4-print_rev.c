#include "main.h"

/**
 * print_rev - print on reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--) /* b - 1 means from the back or the end*/
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
