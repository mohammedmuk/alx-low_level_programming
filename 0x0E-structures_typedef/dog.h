#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - function for struct
 * @name: for name
 * @age: for age
 * @owner: for owner
 *
 * Return: no return
 */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct
{
	char *name, *owner;
	float age;
} dog_t;

#endif
