#include <stdio.h>
#include "main.h"

/**
 * flip_bits - this function returns the no. of bit to flip
 * @n: first number to compare to the second number
 * @m: second with which the n is been compared to
 * Return: number of bits to flip to make all the same
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total_diff = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		total_diff += (diff & 1);
		/**
		 * moving through all the diff values by right shifting to
		 * the next position to effectively count all the values
		 */
		diff >>= 1;
	}
	return (total_diff);
}
