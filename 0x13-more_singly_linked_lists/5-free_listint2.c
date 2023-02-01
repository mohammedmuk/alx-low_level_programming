#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: head of linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = tmp->next;
		free(head);
		*head = tmp;
	}
}
