#include "search_algos.h"
int binarySearch(int *array, int left, int right, int value, int size);
void printArray(int *array, int size);

/**
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int val;

	val = binarySearch(array, 0, size, value, size);
	return (val);
}

/**
 *
 *
 *
 */
int binarySearch(int *array, int left, int right, int value, int size)
{
	int mid;

	if (right >= left)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return mid;

		if (array[mid] > value)
			return (binarySearch(array, left, mid - left, value, size));

		return (binarySearch(array, mid + left, right, value, size));
		printArray(array, size);
	}
	return (-1);
}

void printArray(int *array, int size)
{
	int i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
			printf("%i", array[i]);
			if (i < size - 1)
				printf(", ");
	}
	printf("\n");
}
