#include <stdlib.h>

/**
 * add_nodeint_end - add node to end of linked list
 * @head: head of linked list
 * @n: number
 *
 * Return: tmp
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;
	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = tmp;
	}

	return (tmp);
}
