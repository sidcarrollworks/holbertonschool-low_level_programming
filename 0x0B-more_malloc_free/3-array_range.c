#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates and array of integers
 * @min: min number of what we want in array
 * @max: max number in array
 * Return: the array or null if fails
 */
int *array_range(int min, int max)
{
	int *s;
	int i = 0;
	int elements;

	if (min > max)
		return (NULL);
	elements = max - min;
	s = malloc((elements + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
