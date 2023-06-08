#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - this function returns the power of an x raised to power y
 * @x: the base value
 * @y: the exponent value
 * Return: result of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	int answer; /* where answer is the result after calculating */

	answer = x; /* initializing answer to first argument x */

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	answer *= _pow_recursion(x, y - 1);
	return (answer);
}
