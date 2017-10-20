#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: what we want to separate the strings with
 * @n: number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *holder;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		holder = va_arg(list, char*);
		if (holder != NULL)
			printf("%s", holder);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	putchar ('\n');

	va_end(list);
}
