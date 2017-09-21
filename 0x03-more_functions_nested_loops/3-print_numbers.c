#include "holberton.h"

/**
 * print_numbers - prints number 0-9
 *
 * Description: uses a loop to print numbers
 * Return: returns c
 */
void print_numbers(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
		_putchar(c);
	_putchar('\n');
}
