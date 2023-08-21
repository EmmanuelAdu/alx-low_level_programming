#include "lists.h"

/**
 * add_dnodeint - this function adds a new node to a list
 * @head: pointer to the head first node
 * @n: the int data to insert to list
 * Return: address of node else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		(*head) = new_node;
		return (new_node);
	}
}
