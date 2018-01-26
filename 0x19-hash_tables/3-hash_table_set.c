#include "hash_tables.h"

/**
 * hash_table_set - set a node in hash table
 * @ht: hash table
 * @key: key
 * @value: value to be inserted
 * Return: return 1 if success or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *search;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	search = ht->array[index];
	while (search)
	{
		if (strcmp(search->key, key) == 0)
		{
			free(search->value);
			search->value = strdup(value);
			free(new_node);
			return (1);
		}
		search = search->next;
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
