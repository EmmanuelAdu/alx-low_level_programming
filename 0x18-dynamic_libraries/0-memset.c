#include <stdio.h>
#include "main.h"

/**
 * *_memset - this function assigns a specific value
 * to a block of memory file
 * @s: the beginning address of memory to be filled
 * @b: the char to insert to block of memory
 * @n: the number of bytes to be changed
 * Return: new value of allocated
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
