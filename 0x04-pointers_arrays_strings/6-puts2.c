#include "holberton.h"

/**
 * puts2 - prints out every other char in string
 *
 * Description: loops through the array and prints out every 2 char
 * @str: input string from file
 */
void puts2(char *str)
{
	int length;

	while (str[length] != '\0')
	{
		_putchar(*(str + length));
		length += 2;
	}
	_putchar('\n');
}
