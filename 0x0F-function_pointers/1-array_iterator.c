#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - this function iterates over an array using another
 * function acting as a pointer
 * @array: pointer to array of the value
 * @size: pointer to size of array
 * @action: function pointer to the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/**
	 * declaring a variable to iterate over the array
	 */
	unsigned int ptr;

	if (array == NULL || action == NULL)
		return;

	for (ptr = 0; ptr < size; ptr++)
	{
		action(array[ptr]);
	}
}
