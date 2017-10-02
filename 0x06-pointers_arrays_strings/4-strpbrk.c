#include "holberton.h"

char *_strchr(char *s, char c);

/**
 * _strchr - locates character in string
 *
 * Description: returns a pointer with the matching char
 * @s: a pointer to what you want to look in
 * @c: the char you want to find
 * Return: a pointer to the matched character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

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
