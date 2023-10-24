#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
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
