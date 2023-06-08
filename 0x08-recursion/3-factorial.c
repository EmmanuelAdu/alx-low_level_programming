#include <stdio.h>
#include "main.h"

/**
 * factorial - this function prints the factorial of an argument
 * @n: the number or argument to find the factorial
 * Return: the factorial or value
 * else -1
 */

int factorial(int n)
{
	int value; /* where value is the result after getting the factorial */

	value = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	value *= factorial(n - 1);
	return (value);
}
