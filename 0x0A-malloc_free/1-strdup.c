#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str: the string we want to duplicate
 * Return: returns the duplicated string
 */
char *_strdup(char *str)
{
	int length, i;
	char *s;

	length = 0;
	while (str[length])
		length++;

	s = malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < length)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
