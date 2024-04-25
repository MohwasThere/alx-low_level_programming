#include "lists.h"
/**
 * print_dlistint - prints all the elements of a d_linkedlist
 * @h: list to print the elements of
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count  = 0;
	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
