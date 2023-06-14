#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to pointer function to a 2-dimensional
 * array of integers
 * @width: the column size of the array
 * @height: the row size of the array
 * Return: pointer to the two dimensional array of int
 */

int **alloc_grid(int width, int height)
{
	int **ptr; /* pointer to the dimensional array */
	int a; /* first iteration over height size or the row(horizontal) */
	int b; /* second iteration over width size */

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL) /* WHEN malloc fails */
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);

		if (ptr[a] == NULL) /* WHEN malloc fails */
		{
			for (; a >= 0; a--) /* We iterate over the row one by one and frees it */
			{
				free(ptr[a]);
			}
			free(ptr);

			return (NULL);
		}
	}

	/* this is when we set a, b to 0 after succes allocat memory for array */
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}
	return (ptr);
}
