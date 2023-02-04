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
	if (x != NULL)
	{
		if (x->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %s\n", x->name);

		printf("Age: %f\n", x->age);

		if (x->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", x->owner);
	}
}
