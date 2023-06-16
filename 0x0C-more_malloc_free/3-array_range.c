#include <stdio.h>
#include "main.h"

/**
 * array_range - this function creates an array of int
 * @min: minimum or least range of array stored
 * @max: maximum range of array
 * Return: pointer to array else NULL
 */

int *array_range(int min, int max)
{
	int *ptr; /* pointer to memory allocation */
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1; /* size of the space for allocation */

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
