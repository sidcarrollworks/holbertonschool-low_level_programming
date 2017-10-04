#include "holberton.h"

/**
 * _puts_recursion - prints out a string
 *
 * Description: uses recursion to print out a string
 * @s: pointer to input string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
