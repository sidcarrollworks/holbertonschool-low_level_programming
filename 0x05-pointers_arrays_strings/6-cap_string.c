#include "holberton.h"

int is_seperator(char a);
/**
 * cap_string - capitalizes all words in string
 *
 * Description: capitalizes all the words in a string
 * @arr: input array
 * Return: return appended array
 */
char *cap_string(char *arr)
{
	int i, j;

	i = 0;
	j = 0;
	while (arr[i] != '\0')
	{
		if (is_seperator(arr[i]))
		{
			if (arr[j] >= 'a' && arr[j] <= 'z')
				arr[j] -= 32;
			j = i + 1;
		}
	i++;
	}
	if (j < i)
	{
		if (arr[i] >= 'a' && arr[j] <= 'z')
			arr[j] -= 32;
	}
	return (arr);
}

/**
 * is_seperator - holds all the test cases
 *
 * Description: holds all the test cases for the capitals
 * @a: input
 * Return: 1 if true 0 if false
 */
int is_seperator(char a)
{
	switch (a)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
}
