#include "holberton.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * Description: if element is between a and z it subtracts value by 32
 * @arr: pointer to array
 * Return: the uppercase array
 */
char *string_toupper(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;
		i++;
	}
	return (arr);
}
