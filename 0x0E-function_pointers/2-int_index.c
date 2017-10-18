#include "function_pointers.h"

/**
 * int_index - searches for matching integer
 * @array: the array we are searching through
 * @size: the size of the array
 * @cmp: pointer the the fucntion
 * Return: returns the place in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return(i);
		i++;
	}
	return (-1);
}
