#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev;
	dlistint_t *next;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (temp->prev != NULL)
		temp = temp->prev;

	if (index == 0)
	{
		next = temp->next;
		if (next != NULL)
			next->prev = NULL;
		*head = next;
		free(temp);
		return (1);
	}
	while (temp->next != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	next = temp->next;
	if (prev != NULL)
		prev->next = (next == NULL) ? NULL : next;
	if (next != NULL)
		next->prev = (prev == NULL) ? NULL : prev;
	free(temp);
	return (1);
}