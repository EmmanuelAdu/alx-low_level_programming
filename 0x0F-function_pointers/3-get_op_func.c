#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - this function selects the correct operator
 * function used to perform the operation
 * @s: the operator passed to program
 * Return: the correct function stored in an array
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0; /* iterating over function array */

	while (ops[i].op != NULL && *(ops[i].op) != *s) /* for 2nd pt, check symbol */
	{
		i++;
	}
	return (ops[i].f);
}
