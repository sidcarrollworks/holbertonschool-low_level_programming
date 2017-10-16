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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	if (dog_t != NULL)
	{
		(*new_dog).name = name;
		(*new_dog).age = age;
		(*new_dog).owner = owner;
	}
	return (new_dog);
}
