#include "lists.h"

/**
 * add_dnodeint - add new node to list
 * @head: head of list
 * @n: new element
 * Return: temp
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
