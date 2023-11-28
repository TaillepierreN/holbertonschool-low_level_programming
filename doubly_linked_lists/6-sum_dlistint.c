#include "lists.h"

/**
 * sum_dlistint - return the sum of all data of a dlistint_t list
 * @head: adress of the list
 * Return: sum of the data, 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
