#include <stdio.h>

/**
 * main - this function prints alphabets in reverse order
 *
 * Return: always when done
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
