#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n > 0)
	{	
		for (a = 0 ; a <= n ; a++)
		{
			for (b = 0 ; b <= n ; b++)
			{
				c = a * b;
				if (b != 0)
				{
					_putchar(' ');
					if ((c / 10 + 48) != '0')
						_putchar(c / 10 + 48);
					else
						_putchar(' ');
				}
				_putchar(c % 10 + 48);
				if (a <= n && b < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
