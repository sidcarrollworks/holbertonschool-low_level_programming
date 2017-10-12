#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	if (b == 0)
		return (NULL);
	a = malloc(b);
	if (a == NULL)
	{
		exit (98);
	}
	return (a);
}
