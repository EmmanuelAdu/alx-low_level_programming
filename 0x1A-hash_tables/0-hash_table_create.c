#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: the size of slots to create
 * Return: pointer to the node or slot created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_slot = (hash_table_t *)(malloc(sizeof(hash_table_t)));

	if (size == 0)
		return (NULL);
	if (n_slot == NULL)
		return (NULL);

	n_slot->size = size;
	n_slot->array = calloc(size, sizeof(hash_node_t *));
	if (n_slot->array == NULL)
	{
		free(n_slot);
		return (NULL);
	}
	return (n_slot);
}
