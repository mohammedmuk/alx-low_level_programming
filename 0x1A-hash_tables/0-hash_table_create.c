#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * @size: size of hash table
 *
 * Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	unsigned long i;

	table = malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);

	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
