#include "lists.h"
/**
 * *add_dnodeint_end - adds node at the end of the list
 * @head: pointer to linked list
 * @n: val of new node
 * Return: pointer to new linked list, Null on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = temp;
	return (new);
}
