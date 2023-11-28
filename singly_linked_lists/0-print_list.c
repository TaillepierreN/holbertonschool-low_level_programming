#include "lists.h"

/**
 * print_list - print each element of the list and number of elements
 * @h: adress of the first node
 * Return: unsigned int number of elements
*/

size_t print_list(const list_t *h)
{
	unsigned int nbrelem = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nbrelem++;
		h = h->next;
	}
	return (nbrelem);
}
