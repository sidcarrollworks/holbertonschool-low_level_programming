#include "holberton.h"

/**
 * get_endianness - finds endian type
 * Return: return 0 if big end or 1 if little end
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
