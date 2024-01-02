#include "search_algos.h"

/**
 * binary_search - implements binary search algorithm
 * @array: pointer to array of integers
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the value else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int i;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		}
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
