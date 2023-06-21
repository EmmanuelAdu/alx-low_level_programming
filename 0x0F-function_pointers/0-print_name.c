#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this function prints a name
 * @name: name of person to print
 * @f: pointer to function
 * Return: nothing or void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
