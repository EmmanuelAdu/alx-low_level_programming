#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - this is function that prints the name of the program
 * @argc: this is the no. of arguments to pass
 * @argv: this represents the array of arguments
 * Return: 0 on success
 */

int main(__attribute__((unused)) int argc, char* argv[])
{
	printf("%s\n", *argv);
	return (0);
}
