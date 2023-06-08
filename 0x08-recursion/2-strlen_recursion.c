#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - this function prints the
 * string length of an argument passed to it
 * @s: this is the character or argument passed to the function
 * Return: length  of string
 */

int _strlen_recursion(char *s)
{
	int length; /* where 'length' is the length of the string */

	length  = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
