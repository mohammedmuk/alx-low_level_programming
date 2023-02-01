#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove head of linked list
 * @head: head of linked list
 *
 * Return: num
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp;

	int num;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;

	num = (*head)->n;

	free(*head);

	(*head) = tmp;

	return (num);
}
