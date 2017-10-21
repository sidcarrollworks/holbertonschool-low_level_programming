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
	int c = 0;

	va_start(list, format);
	while (*format)
	{
		switch (*format++)
		{
			case 'c':
				printf("%c", va_arg(list, int));
				c = 0;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				c = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				c = 0;
				break;
			case 's':
				holder = va_arg(list, char*);
				if (holder != NULL)
					printf("%s", holder);
				else
					printf("(nil)");
				c = 0;
				break;
			default:
				c = 1;
				break;
		}
		if (format[i + 1] != '\0' && c == 0)
			printf(", ");
	}
	va_end(list);
	putchar ('\n');
}
