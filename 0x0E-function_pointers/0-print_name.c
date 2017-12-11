#include "function_pointers.h"

/**
 * print_name - calls the function and prints the name
 * @name: the input string
 * @f: the correct function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
