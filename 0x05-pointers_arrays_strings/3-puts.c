#include "holberton.h"

/**
 * _puts - simulates the puts command
 *
 * Description: cycles through the array and prints out single characters
 * @str: input string from file
 */
void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
