#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: return element that matches or -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int siize = size;

	if (!array)
		return (-1);
	for (i = 0; i < siize; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
