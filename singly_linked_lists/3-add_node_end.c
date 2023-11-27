#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newList = malloc(sizeof(list_t));
    list_t *last;

    if (newList == NULL)
        return (NULL);

    newList->str = strdup(str);
    if ((newList)->str == NULL)
        return (NULL);
    newList->len = strlen(str);
    newList->next = NULL;
    last = (*head)->next;
    if (*head == NULL)
    {
        *head = newList;
        return (*head);
    }
    while (last != NULL)
        last = last->next;
    last->next = newList;
    return (newList);
}