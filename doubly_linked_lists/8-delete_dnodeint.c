#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev;
	dlistint_t *next;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	while ((*head)->next != NULL && i != index)
	{
		prev = *head;
		*head = (*head)->next;
		i++;
	}
	if (*head == NULL)
		return (-1);
	temp = *head;
	next = (*head)->next;
	if (prev != NULL)
		prev->next = (next == NULL) ? NULL : next;
	if (next != NULL)
		next->prev = (prev == NULL) ? NULL : prev;
	free(temp);
	return (1);
}