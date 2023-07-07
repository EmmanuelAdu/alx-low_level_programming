#include <stdio.h>
#include "main.h"

/**
 * print_binary_recursive - this function recursively prints the binary
 * @n: number to print the binary representation
 */

void print_binary_recursive(unsigned long int n)
{
	unsigned int Quotient = 0;
	unsigned int Remainder = 0;

	if (n == 0)
	{
		return;
	}
	Remainder = n & 1;
	Quotient = n >> 1;

	print_binary_recursive(Quotient);
	_putchar(Remainder + '0');
}

/**
 * print_binary - this function prints the binary representation of a num
 * @n: the number to print the binary representation
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary_recursive(n);
}
