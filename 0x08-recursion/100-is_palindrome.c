#include <stdio.h>
#include "main.h"

/**
 * is_palindrome_recursive - this function checks if a given string
 * is a palindrome and prints 1 else 0
 * @s: string or character passed to the function
 * @begin: this iterates from the beginning
 * @end: this iterates from the end
 * Return: 1 on success else 0
 */
int is_palindrome_recursive(char *s, int begin, int end)
{
	int len = 0;

	if (s != NULL)
		len++;
	if (len == 0)
		return (0);

	begin = 0;
	end = len - 1;

	if (begin >= end)
		return (1);
	if (s[begin] != s[end])
		return (0);
	return (is_palindrome_recursive(s, begin + 1, end - 1));
}

/**
 * is_palindrome - this function returns 1 for palindrome
 * else 0
 * @s: argument passed to the function
 * Return: 1 on success else 0
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (s != NULL)
		len++;
	return (is_palindrome_recursive(s, 0, len - 1));
}
