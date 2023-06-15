#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - this function converts a string to an int
 * @s: the string to convert to int
 * Return: int
 */

int _atoi(char *s)
{
	int value = 0; /* final result of entire string of int */
	int sign = 1; /* declared to indicate the sign of int */
	int a = 0; /* declared for iterate over string */
	int b = 0;

	while (s[a] == ' ')
	{
		a++;
	}

	if (s[a] == '-' || s[a] == '+')
	{
		sign = (s[a++] == '-') ? -1 : 1;
	}

	while (s[a] >= '0' && s[a] <= '9')
	{
		value = value * 10 + (s[a++] - '0');
	}

	b = sign * value;
	return (b);
}

/**
 * main - this function multiplies two int
 * @argc: this is the number of arguments passed
 * @argv: this is a pointer to the argument passed
 * Return: 1 on success else error for
 */

int main(int argc, char *argv[])
{
	int result; /* result from multiplication */
	int n1; /* first int argument passed */
	int n2; /* second int argument passed */

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}
