#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - this function sum all the parameters passed to it
 * @n: this number of parameters passed to the function
 * Return: sum of all parameters passed to function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all;

	unsigned int r, add = 0;

	if (n == 0)
		return (0);

	va_start(all, n);

	for (r = 0; r < n; r++)
	{
		add += va_arg(all, int);
	}
	va_end(all);

	return (add);
}
