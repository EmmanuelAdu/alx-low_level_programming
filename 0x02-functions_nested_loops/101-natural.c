/**
 * File: 101-natural.c
 * Auth: emma
 */

#include <stdio.h>
#include <main.h>

/*
 * main - 101-natural.c
 *
 * Return: 0 always
 */

int main(void)

{
	int i, sum = 0;

	for (i = 0, i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

