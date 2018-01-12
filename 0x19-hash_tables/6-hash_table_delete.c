#include "hash_tables.h"

/*
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	long unsigned int i;
	hash_node_t *tmp;
	hash_node_t *tmp1;

	if (ht)
		return;
	for (i = 0; i < ht->size ; i++)
	{
		tmp = ht->array[i];
		while (!tmp)
		{
			tmp1 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp1;
		}
	}
	free(ht->array);
	free(ht);
}
