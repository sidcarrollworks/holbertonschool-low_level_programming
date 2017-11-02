#include "holberton.h"
/**
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int nul = NULL;

	for (num = 0 ; *b ; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (nul);
	}
	return (num);
}
