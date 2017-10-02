#include "holberton.h"

/**
 * _strstr - locates a substring in a string
 *
 * Description: finds the matching bytes of substring in string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring of searched for bytes
 * Return: the matched bytes otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return Begin;

		haystack = Begin + 1;
	}
	return (0);
}
