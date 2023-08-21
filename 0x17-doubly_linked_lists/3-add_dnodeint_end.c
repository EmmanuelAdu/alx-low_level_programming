#include "lists.h"

/**
 * add_dnodeint_end - this function adds a new node to the end of a DLL
 * @head: the pointer to the first node
 * @n: the integer data
 * Return: the address of the new node else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *tempPtr = *head;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	while (tempPtr->next != NULL)
	{
		tempPtr = tempPtr->next;
	}
	tempPtr->next = end_node;
	end_node->prev = tempPtr;
	return (end_node);
}
