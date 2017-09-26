#include "holberton.h"

/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int length;
	int mid;

	while (str[length] != '\0')
	{
		length++;
	}

	mid = length / 2;
	
	while (mid <= length)
	{
		_putchar(*(str + mid));
		mid++;
	}
	_putchar('\n');
}
