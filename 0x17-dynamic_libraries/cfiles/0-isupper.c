#include "holberton.h"

/**
 * _isupper - checks to see if character is uppercase
 *
 * Description: Checks if input matches upper or lowercase with ascii
 * @c: input value from other file
 * Return: 1 for upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
