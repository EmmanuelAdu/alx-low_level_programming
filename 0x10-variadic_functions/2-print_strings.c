#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - this prints a string
 * @separator: the string to be printed
 * @n: number of strings passed to the function
 * @...: this is a variable no. of strings to print
 * Return: 0 on success
 * Description: if 1 string is NULL return nil
 * and print a new line at the of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	char *str;
	unsigned int p;/* p - this serves as a num pointer to the
			*  strings to be printed
			*/

	va_start(string, n);

	for (p = 0; p < n; p++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && p != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
