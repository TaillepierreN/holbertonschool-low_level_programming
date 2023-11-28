#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		nbrelem++;
		h = h->next;
	}
	
	return (nbrelem);
}