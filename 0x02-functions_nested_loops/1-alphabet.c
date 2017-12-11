#include "holberton.h"

/**
 *print_alphabet - Prints out the alphabet
 *
 *Description: Prints out the alphabet using a loop withascii code
 *Result: the alphabet
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
