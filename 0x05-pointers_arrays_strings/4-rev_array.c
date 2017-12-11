#include "holberton.h"

/**
 * reverse_array - reverses elements in array
 *
 * Description: switches first and last numbers to reverse the array
 * @a: pointer to array
 * @n: limiting number
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int temp;

	n -= 1;

	while (start <= n)
	{
		temp = a[start];
		a[start] = a[n];
		a[n] = temp;
		start++;
		n--;
	}
}
