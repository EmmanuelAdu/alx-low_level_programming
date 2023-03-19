#include <stdio.h>

/**
 * main - this function prints all possible combinations of single numbers
 *
 * Return: always successful
 */

int main(void)
{
	int e;

for (e = 0 ; e < 10 ; e++)
if (e == 9)
putchar(e + '0');
else
{
putchar(e + '0');
putchar(',');
putchar(' ');
}
	putchar('\n');
	return (0);
}

