#include "lists.h"
/**
 * free_listint2 - deletes the head node of a list.
 * @head: head
 * Return: head node’s data.
 */
int pop_listint(listint_t **head)
{
	int elt;
	listint_t *h, *crt;

	if (*head == NULL)
		return (0);
	crt = *head;

	elt = crt->n;
	h = crt->next;
	free(crt);
	*head = h;

	return (elt);
}
