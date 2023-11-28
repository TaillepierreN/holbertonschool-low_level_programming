#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
	{
		head = head->prev;
	}

	while (head->next != NULL && i != index)
	{
		head = head->next;
		i++;
	}
	if (index == i)
		return (head);
	else
		return (NULL);
}