#include "holberton.h"

/**
 *print_alphabet_x10 - prints out the alphabet 10 times on seperate lines
 *
 *Description: uses nested for loop to accomplish this
 *Result: 10 prints alphabets
 */
void print_alphabet_x10(void)
{
	int c, d;

	for (d = 0 ; d <= 9 ; d++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
	}
}
