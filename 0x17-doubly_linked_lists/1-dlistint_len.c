#include "lists.h"
/**
 * dlistint_len - counts the number of elements in d_linkedlist
 * @h: linked list ot be counted
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
