#include <stdio.h>
#include "main.h"

/**
 * set_bit - this function sets the bit of an index to 1
 * @n: pointer to the int value
 * @index: the index to set to 1
 * Return: 1 on success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * this set the bit at the givien index to 1
	 * using the OR operator after the right shift operator is done performing
	 */
	*n = ((1UL  << index) | *n);
	return (-1);
}
