#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given position
 * in a dlistint_t list
 * @head: adress of the list
 * @index: position where to delete node
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prevNode = NULL;
	dlistint_t *nextNode = NULL;
	dlistint_t *temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (head != NULL)
	{
		while (temp != NULL && i < index)
		{
			temp = temp->next;
			i++;
		}
		if (index != i)
			return (-1);
		if (temp->next != NULL)
			nextNode = temp->next;
		if (temp->prev != NULL)
			prevNode = temp->prev;
		else
			*head = nextNode;
		if (nextNode != NULL)
		nextNode->prev = prevNode;
		if (prevNode != NULL)
		prevNode->next = nextNode;
		free(temp);
		return (1);
	}
	return (-1);
}
