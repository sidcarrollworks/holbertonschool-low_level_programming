#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @size: tells function what the size of array should be
 * @c: tells function what to put in array
 * Return: returns null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
