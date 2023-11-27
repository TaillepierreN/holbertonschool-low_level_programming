#include "lists.h"

void free_list(list_t *head)
{
    list_t *temp, *bin;

    temp = head->next;

    free(head);
    while (temp != NULL)
    {
        bin = temp;
        temp = temp->next;
        free(bin);
    }
    free(temp);
}