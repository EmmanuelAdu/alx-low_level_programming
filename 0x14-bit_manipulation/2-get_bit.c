#include <stdio.h>
#include "main.h"
/**
 * get_bit - this function prints the value of bit of an index
 * @n: this the value to print the binary value at an index
 * @index: the position specified to print the required binary
 * Return: -1 on error encounter else the actual bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}
