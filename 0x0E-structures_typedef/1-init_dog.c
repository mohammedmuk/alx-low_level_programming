#include "dog.h"

/**
 * init_dog - function for struct
 * @d: struct name
 * @name: name
 * @age: for age
 * @owner: for owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
