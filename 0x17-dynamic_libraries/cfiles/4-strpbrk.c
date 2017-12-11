#include "holberton.h"

/**
 * _strpbrk - search a string for any set of bytes
 *
 * Description: locates the first occurrence in the string s of any bytes
 * @s: the starting string
 * @accept: pointer to the bytes we search for
 * Return: the matching bytes
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
			return (--s);
	}
	return (0);
}
