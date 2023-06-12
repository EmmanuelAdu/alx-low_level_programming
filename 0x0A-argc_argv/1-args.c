#include <stdio.h>
#include "main.h"

/**
 * main - function to print the number of arguments passed to program
 * @argc: the number required to print starting from 0
 * @argv: unused parameter in the function
 * Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
