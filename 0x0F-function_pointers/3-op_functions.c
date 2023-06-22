#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - this function adds a two int
 * @a: first int passed
 * @b: second int passed
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function subtracts two int
 * @a: first int passed
 * @b:second int passed
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function multiplies two int
 * @a: first int
 * @b: second int
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divides two int
 * @a: first int passed
 * @b: second int passed
 * Return: div
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - this function returns the remainder after dividing two int
 * @a: first int passed
 * @b: second int passed
 * Return: mod
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
