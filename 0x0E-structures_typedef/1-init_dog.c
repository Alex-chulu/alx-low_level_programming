#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * @d: initialized dog
 */

void init_dog(struct dog *d, char *name, char *owner, float age)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}