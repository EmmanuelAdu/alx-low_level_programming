#include <stdio.h>
#include "main.h"

/**
 *print_binary -this function prints the binary representation of a num
 *@n: number to print the binary
 */

void print_binary(unsigned long int n)
{
	int loop;
	int bin = 0; /* for checking the binary */
	unsigned long int quotient;

	for (loop = 63; loop >= 0; loop--)
	{
		quotient = n >> loop; /* right shift */
		if (quotient & 1) /* checking if quotient is 1 */
		{
			_putchar('1');
			bin++;
		}
		else if (bin)
		{
			_putchar('0');
		}
	}
	if (!bin)
	{
		_putchar('0');
	}

}
