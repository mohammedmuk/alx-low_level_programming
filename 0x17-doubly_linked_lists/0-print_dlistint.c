#include <stddef.h>
#include "lists.h"
#include "stdio.h"
/**
 * print_dlistint - print element of list and return the count of this list
 * @h: head
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
