#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - this function prints strings
 * @separator: constant char acting as a comma
 * @n: number of strings passed
 * @...: variable number of arguments passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;

	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		char *current_str = va_arg(str, char *);

		if (current_str == NULL)
		{
			printf("nil\n");
		}
		else
		printf("%s", current_str);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
