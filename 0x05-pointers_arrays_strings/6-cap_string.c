#include "holberton.h"

/**
 *
 *
 *
 */
char *cap_string(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		if (!(arr[i] >= 'a' && arr[i] <= 'z') && !(arr[i] >= 'A' && arr[i] <= 'Z'))
		{
			if (arr[i] == '.' && arr[i + 1] == ' ')
			{
				i += 1;
				arr[i] -= 32;
			}
			else
			{
				i += 1;
				arr[i] -= 32;
			}
		}
	i++;
	}
	return (arr);
}
