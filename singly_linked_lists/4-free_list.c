#include "lists.h"

void free_list(list_t *head)
{
    list_t *temp, *bin;

    temp = head;
    while (temp != NULL)
    {
        bin = temp;
        temp = temp->next;
        free(bin);
    }

}