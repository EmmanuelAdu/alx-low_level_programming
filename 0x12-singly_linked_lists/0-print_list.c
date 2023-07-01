#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - this function prints all the elements in a list
 * @h: pointer to the list_t
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		numb++;
	}
	return (numb);
}
