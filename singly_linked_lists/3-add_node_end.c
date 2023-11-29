#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: adress of the list
 * @str: str data to put into the list
 * Return: adress of the new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList = malloc(sizeof(list_t));
	list_t *last;

	if (newList == NULL || str == NULL)
	{
		free(newList);
		return (NULL);
	}
	newList->str = strdup(str);
	if ((newList)->str == NULL)
		return (NULL);
	newList->len = strlen(str);
	newList->next = NULL;
	if (*head == NULL)
	{
		*head = newList;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newList;
	return (newList);
}
