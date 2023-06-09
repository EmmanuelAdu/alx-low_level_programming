#include <stdio.h>
#include "main.h"

/**
 * _search_sqrt - this function
 * searches for the natural root
 * of an inputted argument
 * @a: the argument passed
 * @root: the natural root
 *Return: recursively returns the root
 */

int _search_sqrt(int a, int root)
{
	if ((root * root) == a)
		return (root);
	else if ((root * root) > a)
		return (-1);
	else
		return (_search_sqrt(a, root + 1));

}

/**
 * _sqrt_recursion - this function returns
 * the square root of a number
 * @n: the number to test for the root
 * Return: the root calculated
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	return (-1);
	if (n == 1)
	return (1);

	return (_search_sqrt(n, root));

}
