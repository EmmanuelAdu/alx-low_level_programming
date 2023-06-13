#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - name of function use to dynamically allocate memory
 * for a particular char c of size 'size'
 * @size: the size of the array to allocate
 * @c: character for allocation
 * Return: pointer to array else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a; /* a serves as loop for iteration */
	char *ptr; /* ptr - pointer to string of array */

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
