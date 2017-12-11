#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes the do structure
 * @d: the dog structure
 * @name: the name of the dog
 * @age: age of dog
 * @owner: owner name
 * Description: prints the description of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
