#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that returns nothing
 * @d : structure
 * @name : string
 * @age : decimal
 * @owner : string
 * @return : 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = maloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
		return;
	}
	return;
}
