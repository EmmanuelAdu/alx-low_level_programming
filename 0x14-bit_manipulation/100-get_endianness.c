#include <stdio.h>
#include "main.h"

/**
 * get_endianness - this function checks the endianness of a number
 * Return: 1 for small endianness and 0 for big endianness
 */

int get_endianness(void)
{
	unsigned int l = 1;
	char *end = (char *) &l;

	/**
	 * returning the value located at the 1 th position
	 */
	return (*end);
}
