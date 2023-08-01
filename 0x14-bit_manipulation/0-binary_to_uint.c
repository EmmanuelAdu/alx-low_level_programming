#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - this function converts a binary to an unsigned int
 * @b: a pointer to point to the binary or characters
 * Return: the decimal representation of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	int loop = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (loop = 0; b[loop] != '\0'; loop++)
	{
		if (b[loop] < '0' || b[loop] > '1')
			return (0);
		decimal = (decimal << 1) + (b[loop] - '0');
	}
	return (decimal);
}
