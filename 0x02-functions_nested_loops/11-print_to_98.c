#include "holberton.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */
void print_to_98(int n)
{
	int c;

	if (n < 98)
	{
		for (c = n ; c <= 98 ; c++)
			printf("%d, ",c);
	}
	else if (n > 98)
	{
		for (c = n ; c >= 98 ; c--)
			printf("%d, ",c);
	}
	else
		printf("98");

	putchar('\n');
}
