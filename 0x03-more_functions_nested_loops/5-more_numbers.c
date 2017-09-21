#include "holberton.h"

/**
 * more_numbers - prints numbers 0 to 14
 *
 * Description: prints numbers using for loop
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
				_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
		}
	_putchar('\n');
	}
}
