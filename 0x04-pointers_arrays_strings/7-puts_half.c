#include "holberton.h"

/**
 * puts_half - prints half of the string
 *
 * Description: prints half the string buy diving by two
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int length;
	int mid;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		mid = length / 2;
	else
		mid = (length + 1) / 2;

	while (mid <= length - 1)
	{
		_putchar(*(str + mid));
		mid++;
	}
	_putchar('\n');
}
