#include "lists.h"

/**
 * add_dnodeint_end - inserte node to end of list
 * @head: head of node
 * @n: dtata or element
 * Return: head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *tr;

	temp = malloc(sizeof(dlistint_t));
	tr = *head;

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (*head != NULL)
	{
		while (tr->next != NULL)
		{
			tr = tr->next;
		}
		tr->next = temp;
		temp->prev = tr;
		return (*head);
	}
	*head = temp;

	return (temp);
}
