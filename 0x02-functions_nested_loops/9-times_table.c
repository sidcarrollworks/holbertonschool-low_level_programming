#include "holberton.h"

/**
 *
 *
 *
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			c = a * b;
			if ( b != 0)
			{
				_putchar(' ');

				if ((c / 10 + 48) != '0')
					_putchar(c / 10 + 48);
				else
					_putchar(' ');
			}

			_putchar(c % 10 + 48);
			
			if (a <= 9 && b < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
