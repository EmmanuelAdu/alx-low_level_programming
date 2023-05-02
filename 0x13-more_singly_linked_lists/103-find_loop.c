#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *find_listint_loop - this function finds loop in a linked list
 *@head: looks for the linked list of loop
 *Return: address of the node where the loop starts else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *n_ptr = head;
listint_t *tempo = head;

if (head == NULL)
return (NULL);
while (n_ptr && tempo && tempo->next)
{
tempo = tempo->next->next;
n_ptr = n_ptr->next;
if (tempo == n_ptr)
{
n_ptr = head;
while (n_ptr != tempo)
{
n_ptr = n_ptr->next;
tempo = tempo->next;
}
return (tempo);
}
}
return (NULL);
}
