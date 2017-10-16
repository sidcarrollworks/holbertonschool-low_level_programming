#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: holds information for the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#define dog_t struct dog

#endif
