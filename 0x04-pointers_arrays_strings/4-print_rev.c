#include "holberton.h"

/**
 * print_rev - prints the array in reverse
 *
 * Description: takes a string and reverses it using loops
 * @s: value of char at that address
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length != '\0')
	{
		_putchar(*(s + (length - 1)));
		length--;
	}

	_putchar('\n');
}
