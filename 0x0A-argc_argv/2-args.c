#include <stdio.h>
#include "main.h"

/**
 * main - main function for operation
 * @argc: parameter passed to main indicating number of arguments
 * passed to the program to be printed out
 * @argv: the array of argc to be printed out
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int p; /* where p is the loop to check for the number of arguments */

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
