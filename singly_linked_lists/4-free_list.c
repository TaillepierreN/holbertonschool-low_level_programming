#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: adress of the list
 */

void free_list(list_t *head)
{
	list_t *temp, *bin;

	temp = head;
	while (temp != NULL)
	{
		bin = temp;
		temp = temp->next;
		free(bin->str);
		free(bin);
	}

}