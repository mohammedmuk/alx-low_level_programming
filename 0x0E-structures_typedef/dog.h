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


typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
