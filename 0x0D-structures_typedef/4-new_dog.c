#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a whole new doggo!
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 * Return: returns doggo's information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	(*doggo).name = name;
	(*doggo).age = age;
	(*doggo).owner = owner;
	return (doggo);
}
