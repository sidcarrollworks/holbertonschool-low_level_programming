#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 *
 */
char *_strdup(char *str)
{
	int length;
	int i;
	char *s;

	length = 0;
	while (str[length])
		length++;
	s = malloc((length + 1) * sizeof(char));
	i = 0;
	while (i < length)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
