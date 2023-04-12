#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0; /* starting the counting from 0*/

	while (*s != '\0') /* another way is to use: for (; *s++;) and '\0'
			     * means non character or empty space
			     */
	{
		longi++;
		s++;
	}
	return (longi);
}
