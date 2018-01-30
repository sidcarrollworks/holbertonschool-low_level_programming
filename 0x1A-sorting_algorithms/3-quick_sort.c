#include "sort.h"
void swap(int *a, int *b);
int partition(int *array, int low, int high, int size);
void sort(int *array, int low, int high, int size);
/**
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{
    int low;

    low = 0;
    sort(array, low, size, size);
}

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

int partition(int *array, int low, int high, int size)
{
    int pivot = array[high];
    int i = (low - 1);
    int j;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
