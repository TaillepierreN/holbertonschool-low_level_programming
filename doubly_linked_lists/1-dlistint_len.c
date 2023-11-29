#include "lists.h"

/**
 * dlistint_len - return the number of the elements in a dlistint_t list
 * @h: adress of the list
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nbrelem = 0;

	if (h == NULL)
		return (0);
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
