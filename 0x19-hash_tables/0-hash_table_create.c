#include "hash_tables.h"

/*
 * hash_table_create - create hash table
 * @size: size of array
 * Return: return new hash table or NULL of failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int i;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->array = malloc(sizeof(void *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
