#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - creates an array using malloc
 * @nmemb: number of elements in array
 * @size: size of data type
 * Return: pointer to array otherwise null if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
