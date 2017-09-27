#include <stdio.h>

/**
 * rev_string - reverses string inside memory
 *
 * Description: flips values of string in array
 * @s: point to string
 */
void rev_string(char *s)
{
	int end = 0;
	int start = 0;
	char temp;

	while (s[end] != '\0')
		end++;
	end -= 1;

	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}


}
