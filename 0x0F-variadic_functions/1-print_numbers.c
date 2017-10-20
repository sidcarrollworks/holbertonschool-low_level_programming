#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints out a string of numbers
 * @separator: what we want to separate our numbers
 * @n: number of arguements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start (list, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end (list);
}
