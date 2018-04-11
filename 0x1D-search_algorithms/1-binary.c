#include "search_algos.h"
int binarySearch(int *array, int left, int right, int value, int size);
int printArray(int *array, int left, int right);

/**
 * binary_search - main function
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: index where it was found
 */
int binary_search(int *array, size_t size, int value)
{
	int val;

	if (!array)
		return (-1);

	val = binarySearch(array, 0, size, value, size);
	return (val);
}

/**
 * binarySearch - logic of the search
 * @array: array
 * @size: size of array
 * @left: left
 * @right: right
 * @value: value to find
 * Return: index value
 */
int binarySearch(int *array, int left, int right, int value, int size)
{
	int mid;

	size = printArray(array, left, right);
	if (right > left)
	{
		mid = left + (size) / 2;
		if (array[mid] == value)
			return (mid);
		else if (size == 1)
			return (-1);

		if (array[mid] > value)
			return (binarySearch(array, left, mid, value, size));
		else
			return (binarySearch(array, mid, right, value, size));
	}
	return (-1);
}

/**
 * printArray - print array
 * @array: array
 * @left: left index
 * @right: right index
 * Return: size of array
 */
int printArray(int *array, int left, int right)
{
	int i = 0;

	printf("Searching in array: ");
	for (; left < right ; left++)
	{
		printf("%i", array[left]);
		if (left < right - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	return (i);
}
