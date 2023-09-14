#include "hash_tables.h"

/**
 * hash_table_get - Function to retrieve the value of a key
 * @ht: the pointer to the hash table
 * @key: the key to look for
 * Return: the value or NULL when it fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *slot;
	unsigned long int idx = 0;

	if (!ht || !*key || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	slot = ht->array[idx];

	while (slot)
	{
		if (!strcmp(key, slot->key))
			return (slot->value);
		slot = slot->next;
	}
	return (NULL);
}
