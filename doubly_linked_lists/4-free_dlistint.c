#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp, *bin;

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