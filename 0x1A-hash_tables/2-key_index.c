#include "hash_tables.h"

/**
 * key_index - function that get the index of the key
 * @key: An element of hash table
 * @size: size of hash table
 *
 * Return: i % size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}
