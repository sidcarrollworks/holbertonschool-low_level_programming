#include "holberton.h"

/**
 * _strcmp - compares two strings and returns the difference
 *
 * Description: compares the ascii value of each char in string
 * @s1: string 1
 * @s2: string 2
 * Return: returns the diffrence of the ascii values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s2 == '\0')
			return (0);
		else if (*s2 > *s1)
			return (s1 - s2 + 1);
		else if (*s1 > *s2)
			return (s1 - s2 - 1);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (0);
	return (0);
}
