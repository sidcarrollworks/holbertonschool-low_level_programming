#include "sort.h"
void swap(int *a, int *b);
int partition(int *array, int low, int high, int size);
void sort(int *array, int low, int high, int size);

/**
 * quick_sort - quick sort algo
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t low, high;

	low = 0;
	high = size - 1;
	if (size < 2 || array == NULL)
		return;
	size = size - 1;
	sort(array, low, high, size + 1);
}

/**
 * sort - function that sorts array
 * @array: array
 * @low: low index
 * @high: high part
 * @size: size of array used to print
 */
void sort(int *array, int low, int high, int size)
{
	int part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		sort(array, low, part - 1, size);
		sort(array, part + 1, high, size);
	}
}

/**
 * partition - partitions array
 * @array: array
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: partition
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;
	(void) size;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (pivot < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - functiont that swaps elements
 * @a: first ellement
 * @b: seceond element
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
