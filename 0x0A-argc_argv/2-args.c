#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints all inputs arguments
 * @argc: this counts all the arguments
 * @argv: this contains all the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 1; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
