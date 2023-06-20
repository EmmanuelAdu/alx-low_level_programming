#include <stdio.h>

/**
 * main - this function prints name of file program was
 * compiled from
 * Return: 0  always
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
