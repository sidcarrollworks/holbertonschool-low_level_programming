#include "function_pointers.h"

/**
 * array_iterator - executes function on every index of array
 * @array: the array we are indexing
 * @size: the size of the array
 * @action: the call to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
