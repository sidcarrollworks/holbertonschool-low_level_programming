#include "search_algos.h"
int binarySearch(int *array, int left, int right, int value, int size);
void printArray(int *array, int left, int right);

/**
 * binary_search - main function
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: index where it was found
 */
int binary_search(int *array, size_t size, int value)
{
	int val, left, right;

	size -= 1;
	left = 0;
	right = size;

	if (!array)
		return (-1);
	if (size == 0 && array[size] == value)
	{
		printArray(array, left, right);
		return (size);
	}
	if (size == 0 && array[size] != value)
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
	int mid = left + size / 2;

	printArray(array, left, right);
	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
	{
		left = mid + 1;
		size = right - left;
	}
	else if (array[mid] > value)
	{
		right = mid - 1;
		size = right - left;
	}

	if (size == 0 && array[mid + 1] != value)
	{
		printArray(array, left, right);
		return (-1);
	}

	return (binarySearch(array, left, right, value, size));
}

/**
 * printArray - print array
 * @array: array
 * @left: left index
 * @right: right index
 * Return: size of array
 */
void printArray(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%i, ", array[left]);
		left++;
	}
	printf("%i\n", array[left]);
}
