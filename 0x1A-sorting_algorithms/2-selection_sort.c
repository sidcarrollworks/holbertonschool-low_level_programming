#include "sort.h"

/**
 * selection_sort - selection sory alogrithm
 * @array: to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int tmp;

    if (array == NULL)
        return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}
