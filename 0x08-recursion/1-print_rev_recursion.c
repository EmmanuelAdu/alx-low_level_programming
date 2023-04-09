#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This prints a string in reverse
 * @s: the character containing the string
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

