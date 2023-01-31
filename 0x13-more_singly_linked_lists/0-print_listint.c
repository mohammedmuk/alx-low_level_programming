#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all elemets in struct
 * @h: struct item
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
