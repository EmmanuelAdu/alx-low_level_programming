#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this code adds positive numbers
 * @argc: this is the number of arguments passed to the code
 * @argv: this is the string passed to the code
 * Return: result of add else 1 for error in digit input and 0 for
 * no input
 */

int main(int argc, char *argv[])
{
	int x; /* iterating over each argument passed to code */
	int y; /* iterate over each character in the argument */
	int result = 0;

	for (x = 1; x < argc; x++) /* checking if arguments passed is digit */
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++) /* checking if the digits are positive */
	{
		if (atoi(argv[x]) < 0)
		{
			printf("0\n");
			return (0);
		}
	}
	for (x = 1; x < argc; x++) /* iterating and adding simultaneously over arg */
	{
		result += atoi(argv[x]);
	}
	printf("%d\n", result);
	return (result);
}
