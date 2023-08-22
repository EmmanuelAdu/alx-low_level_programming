#include <stdio.h>
#include "main.h"

/**
 * _isupper - this function checks for alphabets in uppercase
 * @c: argument passed to function
 * Return: 1 when uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
