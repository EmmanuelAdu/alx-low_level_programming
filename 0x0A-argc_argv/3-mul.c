#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function performs the operation of two multiplies
 * @argc: this counts the number of arguments
 * @argv: this accepts the argument
 * Return: 0 on success or 1 on Error
 */

int main(int argc, char *argv[])
{
	int r;
	int num1;
	int num2;

	for (;(argc = 3);)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);

		r = num1 * num2;
		printf("%d\n", r);

		return (0);
	}

	for (;(argc != 3);)
	{
		printf("Error\n");
		return (1);
	}
}

