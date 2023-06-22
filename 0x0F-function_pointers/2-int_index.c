#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - this function compares and prints an int
 * @array: array for cmp to look from
 * @size: size of array
 * @cmp: acts as a function pointer
 * Return: int else -1 on error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* declaring a variable to iterate */
	int ptr;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (ptr = 0; ptr < size; ptr++)
	{
		if (cmp(array[ptr]))
			return (ptr);
	}
	return (-1); /* when function fails */
}
