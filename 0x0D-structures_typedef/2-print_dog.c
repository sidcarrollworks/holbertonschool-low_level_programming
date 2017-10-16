#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints out the dog information
 * @d: pointer to the do struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", (*d).age);

		if ((*d).owner != NULL)
			printf("Owner: %s", (*d).owner);
		else
			printf("Owner: (nil)");
	}
}
