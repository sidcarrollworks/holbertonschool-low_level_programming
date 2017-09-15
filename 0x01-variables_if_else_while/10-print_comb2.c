#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
	int c;
	int d;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (d = '0' ; d <= '9' ; d++)
		{
			putchar(c);
			putchar(d);
			if (c < '9' || d < '9')
			{	
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
