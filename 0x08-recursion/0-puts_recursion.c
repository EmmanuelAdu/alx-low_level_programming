<<<<<<< HEAD
/**
 *File: 0-puts_recursion.c
 *Auth: sam
 */

#include "main.h"

/**
 *_puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
=======
#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed
>>>>>>> c8ca9595255758df5f41d9786a9f5042759c0b33
 */

void _puts_recursion(char *s)
{
<<<<<<< HEAD
	if (*s)
	{

                _putchar(*s);

                _puts_recursion(s + 1);

        }



        else


                _putchar('\n');

=======
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
>>>>>>> c8ca9595255758df5f41d9786a9f5042759c0b33
}
