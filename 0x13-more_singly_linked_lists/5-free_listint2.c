#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = tmp->next;
		free(head);
		*head = tmp;
	}

	head = NULL;
}
