#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserst new node at given position
 * @h: pointer to linked list
 * @idx: index at where we will insert
 * @n: value to be inserted
 * Return: New list, NULL if Fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	count = 0;

	new->n = n;

	if (h == NULL)
		add_dnodeint(&*h, n);

	temp = *h;

	while (temp->prev != NULL)
		temp = temp->prev;

	while (count != idx)
	{
		temp = temp->next;
		count++;
	}
	if (temp != NULL)
	{	new->next = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	else
		return (NULL);


	*h = temp;

	return (new);

}
