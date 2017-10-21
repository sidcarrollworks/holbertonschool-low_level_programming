#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - prints all the things
 * @format: contains the format modifiers
 */
void print_all(const char * const format, ...)
{
	char *holder;
	int i = 0;
	va_list list;

	va_start(list, format);
	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				holder = va_arg(list, char*);
				if (holder == NULL)
					holder = "(nil)";
				printf("%s", holder);
				break;
			default:
				break;
		}
		if (format[i])
			printf(", ");
	}
	va_end(list);
	putchar ('\n');
}
