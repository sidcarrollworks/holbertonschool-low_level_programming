#include "holberton.h"

/**
 * _memcpy - implementation of memcpy
 *
 * Description: copies one block of memory to another
 * @dest: pointer to the address we want to start copying
 * @src: pointer to the first address we want to copy
 * @n: the number of byts to copy
 * Return: the copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
