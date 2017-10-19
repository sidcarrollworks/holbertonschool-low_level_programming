#include "holberton.h"

/**
 * _strncpy - copies string to a certain point
 *
 * Description: copies string but only up untill n
 * @dest: copy destination
 * @src: source string
 * @n: string limit
 * Return: return copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
