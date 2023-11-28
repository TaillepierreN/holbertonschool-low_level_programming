#include "lists.h"

/**
 * add_dnodeint - add a new node at the begining of a dlistint_t list
 * @head: adress of the list
 * @n: int data to put into the list
 * Return: adress of the new element, NULL if failed
 */

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
