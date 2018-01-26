#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int i;
	hash_node_t *tmp;
	int catch;

	if (!ht)
		return;

	catch = 0;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (catch == 0)
				catch = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
