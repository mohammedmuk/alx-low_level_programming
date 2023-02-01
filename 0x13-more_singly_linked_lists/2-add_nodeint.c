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

	tmp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (tmp == NULL)
		return (NULL);


	tmp->n = n;
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
