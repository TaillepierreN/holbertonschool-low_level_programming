#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *newList = malloc(sizeof(list_t));

    if(newList == NULL)
        return(NULL);

    newList->str = strdup(str);
    if (newList->str == NULL)
    {
        free(newList);
        return (NULL);
    }
    newList->next = *head;
    newList->len = strlen(str);
    *head = newList;
    return(*head);
}