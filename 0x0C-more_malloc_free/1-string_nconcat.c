#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - this function concatenates two strings
 * @s1: first string for concatenation
 * @s2: second string for concatenation
 * @n: size of bytes
 * Return: pointer to allocated memory of concat str else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i; /* checking for the length of s1 and s2 */
	unsigned int a;
	unsigned int b; /* calculating for the length of both s1 and s2 */

	i = strlen(s1);
	a = strlen(s2);

	if (n >= a)
		b = i + a + 1;
	else
		b = i + n + 1;

	ptr = malloc(sizeof(char) * b); /* allocating memory for ptr */

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	strncpy(ptr, s1, i);
	ptr[i] = '\0';
	strncat(ptr, s2, n);
	return (ptr);
}
