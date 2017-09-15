#include <stdio.h>

/**
 * main - Prints three digits number combinations without repeating numbers
 * Description: Prints three digit numbers without repeating
 * numbers and seperates with commas
 * Return: 012, 013
 */
int main(void)
{
	int c, d, e;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (d = '0' ; d <= '9' ; d++)
		{
			for (e = '0' ; e <= '9' ; e++)
			{
				if (c != d && d != e && c != e && d < e && c < d)
				{
					putchar(c);
					putchar(d);
					putchar(e);

					if (e != '9' || e - d != 1 || d - c != 1)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
