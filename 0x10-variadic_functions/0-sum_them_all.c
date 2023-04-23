#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - function to prints the sum of n parameters of int
 * @n: constant number of parameters for summing
 * Return: 0 when n == 0
 * or else (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int p;
	va_list num_add;

	if (n == 0)
	{
	return (0);
	}

	va_start(num_add, n);
	for (p = 0; p < n; p++)
		sum += va_arg(num_add, unsigned int);
	va_end(num_add);

	return (sum);
}