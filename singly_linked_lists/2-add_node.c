#include "lists.h"

/**
 * add_node - add a new node at the begining of a list_t list
 * @head: adress of the list
 * @str: string data to put into the list
 * Return: adress of the new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newList = malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);
	if (newList->str == NULL)
	{
		free(newList);
		return (NULL);
	}
	newList->next = *head;
	newList->len = strlen(str);
	*head = newList;
	return (*head);
}
