#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - this function allocates memory
 * using malloc
 * @b: the size of argument passed to function
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *arrow; /* serves as pointer to allocated memory */

	arrow = malloc(b);

	if (arrow == NULL)
		exit(98);
	return (arrow);
}
