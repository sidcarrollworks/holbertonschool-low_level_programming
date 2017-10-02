#include "holberton.h"

char *_strchr(char *s, char c);

char *_strchr(char *s, char c)
{
	while (*s != '\0')
        {
		if (*s == c)
                	return (s);
                s++;
        }
        return (0);
}


/**
 *
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if(_strchr(accept, *s++))
			return --s;
	}
	return (0);
}
