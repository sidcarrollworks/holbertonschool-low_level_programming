#include "hash_tables.h"

int does_key_exist(hash_table_t *ht, const char *key, const char *value);
int string_size(const char *key);

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

	if (key == NULL || ht == NULL ||  value == NULL)
		return (0);
	if (string_size(key) == 0)
		return (0);

	if (check_key_size((const unsigned char *) key, ht->size) == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * does_key_exist -  checks if key alreadye exists
 * @ht: hash table
 * @key: key
 * @value: valuen 1 if success
 * Return: return
 */
int does_key_exist(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}

/**
 * string_size - find size of string
 * @key: key
 * Return: return size
 */
int string_size(const char *key)
{
	int i = 0;

	while (key[i] != '\0')
		i++;

	return (i);
}
