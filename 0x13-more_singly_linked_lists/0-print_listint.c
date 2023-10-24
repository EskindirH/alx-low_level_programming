#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: head
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
