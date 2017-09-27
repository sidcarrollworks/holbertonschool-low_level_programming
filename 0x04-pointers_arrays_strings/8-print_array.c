#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints out each element of array
 *
 * Description: uses at loop to stop at each element and print
 * @a: pointer to the array
 * @n: input value of element number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
		printf("%d, ", a[i]);
	_putchar('\n');
}
