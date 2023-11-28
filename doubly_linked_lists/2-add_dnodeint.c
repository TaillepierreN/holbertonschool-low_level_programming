#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (*head);
}