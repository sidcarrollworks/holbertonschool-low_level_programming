#include "holberton.h"

/**
 * leet - encodes string with 1337
 *
 * Description: econdes a string by replaces letters
 * @arr: pointer to string
 * Return: encoded string
 */
char *leet(char *arr)
{
	int i;
	int s;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (arr[i] != '\0')
	{
		s = 0;

		while (l[s] != '\0')
		{
			if (l[s] == arr[i])
				arr[i] = n[s];
			s++;
		}
		i++;
	}
	return (arr);
}
