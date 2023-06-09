#include <stdio.h>
#include "main.h"

/**
 * is_divisible - this function checks the divisiblility of
 * an argument passed to it
 * @a: the argument passed to function to check divisibility
 * @is_div: the divisor for the division
 * Return: 1 when not divisible else 0
 */

int is_divisible(int a, int is_div)
{
	if (a % is_div == 0)
		return (0);
	if (is_div == a / 2)
		return (1);
	return (is_divisible(a, is_div + 1));

}

/**
 * is_prime_number - this function prints 1 if number is prime
 * @n: the number passed to the function
 * Return: 1 if number is prime else 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_divisible(n, 2));

}
