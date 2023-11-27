#include "lists.h"

/**
 * list_len - print each element of the list and number of elements
 * @h: adress of the first node
 * Return: unsigned int number of elements
*/

size_t list_len(const list_t *h)
{
    unsigned int nbrelem = 0;

    while (h != NULL)
    {
        nbrelem++;
        h = h->next;
    }
    return(nbrelem);
}