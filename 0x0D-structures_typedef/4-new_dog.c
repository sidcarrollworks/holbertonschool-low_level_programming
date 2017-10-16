#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *src);

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
	char *nameCopy;
	char *ownerCopy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	nameCopy = _strcpy(name);
	ownerCopy = _strcpy(owner);

	(*new_dog).name = nameCopy;
	(*new_dog).age = age;
	(*new_dog).owner = ownerCopy;
	return (new_dog);
}
/**
 * _strlen - prints the length of a string
 * Description: cycles through the array of s until its false
 */
int _strlen(char *s)
{
	int len;

	for (len = 0 ; s[len] ; len++);

	return (len);
}
/**
 * _strcpy - copys array from one pointer to another
 * @dest: pointer to destination file
 * @src: pointer to source file
 * Return: the array
 */
char *_strcpy(char *src)
{
	int i;
	int len;
	char *dest;

	len = _strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
