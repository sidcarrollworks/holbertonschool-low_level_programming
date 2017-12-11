#include "holberton.h"
/**
 * rot13 - rot13 encrypter
 *
 * Description: replace letter with letter 13 letters later
 * @arr: input string
 * Return: appended array
 */
char *rot13(char *arr)
{
	int i;
	int j;
	int stop = 1;
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char m[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (arr[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (l[j] == arr[i] && stop == 1)
			{
				arr[i] = m[j];
				stop = 0;
			}
			j++;
		}
		stop = 1;
		i++;
	}
	return (arr);
}
