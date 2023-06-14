#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees a two dimensional array
 * @grid: pointer to the two dimensional array
 * @height: the size of the row in the array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a; /* acts as a loop for iteration over height/row */

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
