#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a d_linkedlist
 * @head: head of doubly linked list
 * @n: value of node
 * Return: address of new element, NULL on fail
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	temp = *head;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;

	newnode->next = temp;

	if (temp != NULL)
		temp->prev = newnode;

	*head = newnode;

	return (newnode);

}
