#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - This prints a list of integers
 * @separator: is the string to be printed b\n numbers(,)
 * @n: number of integers passed to the function
 * @...: array of numbers passed to be printed
 * Return: 0 on success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	unsigned int p;/* p - serves a pointer to each value of n */

	va_start(num, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(num, int));
		if (p != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
