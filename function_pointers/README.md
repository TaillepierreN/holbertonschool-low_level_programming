# C - Function Pointers

## Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- Understand what function pointers are and how to use them
- Recognize the content held by a function pointer
- Identify where a function pointer points to in the virtual memory

## Tasks

### 0. What's my name
**Mandatory**
Write a function `print_name` that prints a given name.

**Prototype:**
```c
void print_name(char *name, void (*f)(char *));
```

**Example:**
```c
#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
```

### 1. If you spend too much time thinking about a thing, you'll never get it done
**Mandatory**
Write a function `array_iterator` that executes a function given as a parameter on each element of an array.

**Prototype:**
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```

**Example:**
```c
#include <stdio.h>
#include "function_pointers.h"

void print_elem(int elem)
{
    printf("%d\n", elem);
}

void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
```

### 2. To hell with circumstances; I create opportunities
**Mandatory**
Write a function `int_index` that searches for an integer in an array.

**Prototype:**
```c
int int_index(int *array, int size, int (*cmp)(int));
```

**Example:**
```c
#include <stdio.h>
#include "function_pointers.h"

int is_98(int elem)
{
    return (98 == elem);
}

int is_strictly_positive(int elem)
{
    return (elem > 0);
}

int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
```

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
**Mandatory**
Write a program that performs simple operations.

**Usage:** `calc num1 operator num2`

You can assume num1 and num2 are integers, so use the `atoi` function to convert them from the string input to int.

**Operators:**
- `+`: addition
- `-`: subtraction
- `*`: multiplication
- `/`: division
- `%`: modulo

If the number of arguments is wrong, print "Error", followed by a new line, and exit with the status 98.

If the operator is none of the above, print "Error", followed by a new line, and exit with the status 99.

If the user tries to divide (/ or %) by 0, print "Error", followed by a new line, and exit with the status 100.

#### Files
- `3-calc.h`
- `3-op_functions.c`
- `3-get_op_func.c`
- `3-main.c`

#### Compilation and Examples
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
2
./calc 97 + 1
98
./calc 1024 / 10
102
./calc 1024 '*' 98
100352
./calc 1024 '\*' 98
Error
./calc 1024 - 98
926
./calc 1024 '%' 98
44
```