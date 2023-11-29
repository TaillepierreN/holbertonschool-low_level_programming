#include "lists.h"

/**
 * add_dnodeint - add a new node at the begining of a dlistint_t list
 * @head: adress of the list
 * @n: int data to put into the list
 * Return: adress of the new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head == NULL) ? NULL : *head;
	newNode->prev = NULL;
    if (*head != NULL)
	{
        (*head)->prev = newNode;
	}
	*head = newNode;
	return (*head);
}
