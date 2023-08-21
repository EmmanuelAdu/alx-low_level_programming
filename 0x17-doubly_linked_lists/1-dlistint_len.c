#include "lists.h"

/**
 * dlistint_len - this function returns the no. of elements in DLL
 * @h: the head pointer to the first element of list
 * Return: the number of elements in DLL
 */

size_t dlistint_len(const dlistint_t *h)
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
		temp = temp->next;
		tot_list++;
	}
	return (tot_list);
}
