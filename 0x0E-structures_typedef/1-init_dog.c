#include <stddef.h>
#include "dog.h"

/**
 * init_dog - To initialise a dog structure
 * @d: A dog structure
 * @name: The name of a dog
 * @age: The age of a dog
 * @owner: The owner of a dog
 * Return: Empty
 *
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
