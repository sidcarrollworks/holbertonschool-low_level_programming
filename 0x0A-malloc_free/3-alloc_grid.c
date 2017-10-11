#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - prints a multidimensional array
 * @width: number of columns
 * @height: number of rows
 * Return: return the multidimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(height * sizeof(int *));

	if (width < 1 || height < 1)
		return (NULL);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i -= 1 ; i > height ; i--)
				free(arr[i]);
			free(arr);
		}
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
