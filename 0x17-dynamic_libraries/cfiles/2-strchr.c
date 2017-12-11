#include "holberton.h"

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
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
