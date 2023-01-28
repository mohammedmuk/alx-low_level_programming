#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function use struct
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	name = d->name;
	age = d->age;
	owner = d->owner;

	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";
	if (!age)
		printf("Name: %s\nAge: %f\nOwner: (nil)", name, age);

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
