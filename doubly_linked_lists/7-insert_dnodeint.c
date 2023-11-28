#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *previousNode;

	if (h == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return(newNode);
	}
	while ((*h)->prev != NULL)
		h = (*h)->prev;
	while ((*h)->next != NULL && i != (idx - 1))
	{
		h = (*h)->next;
		i++;
	}
	if (i != (idx - 1))
	{
		free(newNode);
		return (NULL);
	}
	newNode->prev = h;
	previousNode = h;
	h = (*h)->next;
	previousNode->next = newNode;
	if (h != NULL)
		(*h)->prev = newNode;
	newNode->next = h;
	return (newNode);
}