#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - multiplies two positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: result of multiplication of two positive numbers
 */

int main(int argc, char *argv[])
{
	int a; /* will be assigned to argv1 */
	int b; /* will be assigned to argv2 */
	int x; /* first/outer iteration over the two argc strings */
	int y; /* inner/second iteration over the indivi char in the string */
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* checking if  inputed strings are all int */
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	/* assigning a and b to argv */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	/* checking if all positive */
	if (a < 0 || b < 0)
	{
	printf("Error\n");
	exit(98);
	}
	else
	{
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
