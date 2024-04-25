#include "lists.h"
/**
 * *get_dnodeint_at_index - gets the item and nth node
 * @head: pointer to the linked list
 * @index: index of item
 * Return: node at index, or NULL if not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	temp = head;

	while (count != index)
	{
		if (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		else
			return (0);
	}

		return (temp);

}
