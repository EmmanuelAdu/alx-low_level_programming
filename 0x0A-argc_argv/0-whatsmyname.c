#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the name of the program
 * @argc: unused argument passed to main function
 * @argv: the argument to be printed out
 * Return: 0 on success
 */

/* __attribute__((unused)) shows that argc isnt called in the function */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
