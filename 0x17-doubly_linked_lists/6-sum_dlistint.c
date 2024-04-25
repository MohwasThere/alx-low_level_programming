#include "lists.h"
/**
 * sum_dlistint -  sums the data in a linked list
 * @head: pointer to linkedlist
 * Return: sum of elements, 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp->prev != NULL)
		temp = temp->next;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
