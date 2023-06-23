#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function prints numbers
 * @separator: this is the string to be printed between numbers
 * @n: number of arguments passed to function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_nmb;

	unsigned int r;

	if (n == 0)
		return;
	va_start(print_nmb, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(print_nmb, int));
		if (separator != NULL && r < n - 1)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(print_nmb);
}
