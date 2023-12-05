# Doubly Linked Lists in C

## Learning Objectives

After completing this project, you should be able to:

### General
- Understand the concept of doubly linked lists
- Implement operations on doubly linked lists in C
- Use dynamic memory allocation to manage linked list nodes

## Tasks

### 0. Print List
**Mandatory**

Write a function `print_dlistint` that prints all the elements of a `dlistint_t` list.

**Prototype:**
```c
size_t print_dlistint(const dlistint_t *h);
```

**Return:** the number of nodes

**Format:** see example

If `h` is `NULL`, don't print anything and return `0`.

**Example:**
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
```

### 1. List Length
**Mandatory**

Write a function `dlistint_len` that returns the number of elements in a linked `dlistint_t` list.

**Prototype:**
```c
size_t dlistint_len(const dlistint_t *h);
```

**Example:**
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
```

### 2. Add Node
**Mandatory**

Write a function `add_dnodeint` that adds a new node at the beginning of a `dlistint_t` list.

**Prototype:**
```c
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

**Return:** the address of the new element, or `NULL` if it failed

### 3. Add Node at the End
**Mandatory**

Write a function `add_dnodeint_end` that adds a new node at the end of a `dlistint_t` list.

**Prototype:**
```c
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

**Return:** the address of the new element, or `NULL` if it failed

### 4. Free List
**Mandatory**

Write a function `free_dlistint` that frees a `dlistint_t` list.

**Prototype:**
```c
void free_dlistint(dlistint_t *head);
```

### 5. Get Node at Index
**Mandatory**

Write a function `get_dnodeint_at_index` that returns the nth node of a `dlistint_t` linked list.

**Prototype:**
```c
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```

**Return:** the nth node of the list, or `NULL` if the node does not exist

### 6. Sum List
**Mandatory**

Write a function `sum_dlistint` that returns the sum of all the data (n) of a `dlistint_t` linked list.

**Prototype:**
```c
int sum_dlistint(dlistint_t *head);
```

**Return:** the sum of all the data (n) of the list; if the list is empty, return `0`

### 7. Insert at Index
**Mandatory**

Write a function `insert_dnodeint_at_index` that inserts a new node at a given position.

**Prototype:**
```c
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```

**Return:** the address of the new node, or `NULL` if it failed; if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

### 8. Delete at Index
**Mandatory**

Write a function `delete_dnodeint_at_index` that deletes the node at index `index` of a `dlistint_t` linked list.

**Prototype:**
```c
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

**Return:** `1` if it succeeded, `-1` if it failed