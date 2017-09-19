#include "holberton.h"

/**
 * _isalpha - checks for alphabetical character
 *
 * Description: looks at ascii table and sees if its a letter
 * @c: input from test file
 * Return: 1 if letter 0 if not a letter
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
