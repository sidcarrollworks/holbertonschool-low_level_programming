#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - malloc a certain number of bytes and check it
 * @b: number of bytes
 * Return: pointer to memory or 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
