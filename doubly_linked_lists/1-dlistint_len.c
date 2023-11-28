#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nbrelem = 0;

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		nbrelem++;
		h = h->next;
	}

	return (nbrelem);
}