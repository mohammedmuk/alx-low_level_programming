#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - Number of elements in list
 * @h: head
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
