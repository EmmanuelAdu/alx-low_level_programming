#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the function that performs the code
 * @argc: this is the no. of arguments passed
 * @argv: this represents the array of arguments
 * Return: 0 on success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
