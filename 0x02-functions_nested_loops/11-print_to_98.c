#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints numbers to 98 from starting point
 *
 *Description: prints out starting number to 98
 *@n: input number
 *Return:void
 */
void print_to_98(int n)
{
	int c;

	if (n < 98)
	{
		for (c = n ; c <= 98 ; c++)
		{
			printf("%d", c);

			if (c < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (c = n ; c >= 98 ; c--)
		{
			printf("%d", c);

			if (c > 98)
				printf(", ");
		}
	}
	else
		printf("98");

	putchar('\n');
}

