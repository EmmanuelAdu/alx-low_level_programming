#include "lists.h"

/**
 * print_dlistint - this function prints all elements of a double linked list
 * @h: the head pointer to the first list
 * Return: the number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t tot_list = 0;

	if (h == NULL)
	{
		return (tot_list);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		tot_list++;
	}
	return (tot_list);
}
