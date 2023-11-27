#include <stdio.h>
#include "dog.h"
#include "string.h"

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
	strcpy(d->name, "Max");
	d->age = 2.5;
	strcpy(d->owner, "Erik");
	printf("Dog name is %s, its age is %f and its owner called %s", d->name, d->age, d->owner);
	return;
}
