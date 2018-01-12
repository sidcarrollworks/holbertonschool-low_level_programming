#include "hash_tables.h"

/*
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int i;
	hash_node_t *tmp;

	size = ht->size;

	printf("{");
	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];
		if (ht->array[i] != NULL)
		{
			while (tmp)
			{
				printf("'%s': '%s', ", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}		
	}
	printf("}\n");
}
