#include <stdlib.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
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
