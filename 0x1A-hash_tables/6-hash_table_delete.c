#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes a hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *slot;
	hash_node_t *hash_free;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		slot = ht->array[i];
		while (slot)
		{
			hash_free = slot;
			slot = slot->next;
			if (hash_free->key)
				free(hash_free->key);
			if (hash_free->value)
				free(hash_free->value);
			free(hash_free);
		}
	}
	free(ht->array);
	free(ht);
}
