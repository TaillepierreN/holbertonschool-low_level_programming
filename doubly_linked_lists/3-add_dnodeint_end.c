#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *lastNode;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	newNode->prev = lastNode;
	lastNode->next = newNode;
	return (newNode);
}