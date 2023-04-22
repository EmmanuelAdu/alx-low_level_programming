#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: pointer to the array function
 * @size: size or number of elements in the array
 * @cmp: pointer to all int functions
 * Return: -1 on failure or 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int check;/*check moves to the array one by one to check
		   * for matching int
		    */

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (check = 0; check < size; check++)
	{
		if (cmp(array[check]))
			return (check);
	}
	return (-1);
}
