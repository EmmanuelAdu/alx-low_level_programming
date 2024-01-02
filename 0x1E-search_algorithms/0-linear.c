#include "search_algos.h"
/**
 * linear_search - Performs a linear search algorithm
 * @array: Pointer to array
 * @size: number of elements in array
 * @value: the value to search for in array
 *
 * Return: the value in the array else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
