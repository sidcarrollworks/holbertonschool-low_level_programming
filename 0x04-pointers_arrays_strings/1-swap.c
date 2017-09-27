#include <stdio.h>

/**
 * swap_int - swaps a for b and b for a
 *
 * Description: swaps the values of two pointers
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
