#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer or memory address to the value
 * @index: position to set the value to 0
 * Return: 1 on success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	/**
	 * sets using the NOT operator to flip 1 to 0
	 * and using the & to check if both are 1 and not just only of them
	 */
	*n = (~(1UL << index) & *n);
	return (1);
}
