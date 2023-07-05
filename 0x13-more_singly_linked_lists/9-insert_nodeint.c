#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - this function inserts a node at a given position
 * @head: double pointer to the head of the list
 * @idx: the position to insert the node
 * @n: the value to insert the node
 * Return: pointer to the new node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;
	unsigned int l = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	for (l = 0; ptr && (l < idx); l++)
	{
		if (l == (idx - 1))
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		else
		{
			ptr = ptr->next;
		}
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (NULL);
}
