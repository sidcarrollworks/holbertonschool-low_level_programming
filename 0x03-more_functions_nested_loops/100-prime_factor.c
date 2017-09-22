#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
	long num;
int div;

	num = 612852475143

	for (int i = 2 ; i <= num ; i++)
	{
		if (num % i == 0)
		{
			for (int j = 2 ; j < i ; j++)
			{
				if (i % j == 0 && j != i)
					break;
				else
					div = i;
			}
		}
	}
	printf("%i\n", div);
}
