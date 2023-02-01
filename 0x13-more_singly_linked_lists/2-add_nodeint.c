#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node to linked list
 * @head:  head of linked list
 * @n: number
 *
 * Return: tmp
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));

	tmp->n = n;
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
