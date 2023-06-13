#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - name of function that concatenates two
 * strings after assigning and returning a pointer to the
 * newly allocated memory
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer to newly allocated space that contains concatenation
 * of two strings, else it returns NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr; /* ptr- pointer to newly allocated space of concat str */
	int a; /* first iteration to first string */
	int b; /* second iteration to second string */

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0';)
	{
		a++;
	}
	for (b = 0; s2[b] != '\0';)
	{
		b++;
	}

	ptr = malloc(sizeof(char) * (a + b + 0));
	if (ptr == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		ptr[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		ptr[a] = s2[b];
		a++, b++;
	}
	ptr[a] = '\0';
	return (ptr);
}
