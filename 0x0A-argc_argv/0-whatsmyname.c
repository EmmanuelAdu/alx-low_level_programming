#include "main.h"
#include <stdio.h>


/**
 * main - this is function that prints the name of the program
 * @argc: this is the no. of arguments to pass
 * @argv: this represents the array of arguments
 * __attribute__((unused)) - this function neglects the int argc
 * Return: 0 on success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
