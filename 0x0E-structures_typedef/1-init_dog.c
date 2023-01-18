#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type
 * @d: structre of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
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
