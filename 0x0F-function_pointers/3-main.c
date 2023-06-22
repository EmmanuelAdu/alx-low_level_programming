#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - this function solves basic operations
 * @argc: number of arguments passed to main
 * @argv: each string of argument passed
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	char *op;
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/**
	 * checking if operator passed was not found and it
	 * is a single character also
	 */

	op = argv[2];
	if (get_op_func(op) == NULL && op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/**
	 * checks if operator of div and mod is divided by 0
	 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
