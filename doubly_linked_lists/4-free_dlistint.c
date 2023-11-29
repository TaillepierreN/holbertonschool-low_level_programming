#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: adress of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *bin;

	if (head == NULL)
		return;
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	temp = head;
	while (temp != NULL)
	{
		bin = temp;
		temp = temp->next;
		free(bin);
	}
}
