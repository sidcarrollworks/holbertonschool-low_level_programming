#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp1;

	for (i = 0; i < ht->size ; i++)
	{
		tmp = ht->array[i];
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				tmp1 = tmp->next;
				if (tmp->key)
					free(tmp->key);
				if (tmp->value)
					free(tmp->value);
				free(tmp);
				tmp = tmp1;
			}
		}
	}
	free(ht->array);
	free(ht);
}
