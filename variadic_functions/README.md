# C - Variadic Functions

## Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- Understand what variadic functions are
- Know how to use `va_start`, `va_arg`, and `va_end` macros
- Understand the use of the `const` type qualifier

## Tasks

### 0. Beauty is variable, ugliness is constant
**Mandatory**

Write a function `sum_them_all` that returns the sum of all its parameters.

**Prototype:**
```c
int sum_them_all(const unsigned int n, ...);
```

**Example:**
```c
#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}
```

### 1. To be is to be the value of a variable
**Mandatory**

Write a function `print_numbers` that prints numbers, followed by a new line.

**Prototype:**
```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

**Example:**
```c
#include "variadic_functions.h"

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
```

### 2. One woman's constant is another woman's variable
**Mandatory**

Write a function `print_strings` that prints strings, followed by a new line.

**Prototype:**
```c
void print_strings(const char *separator, const unsigned int n, ...);
```

**Example:**
```c
#include "variadic_functions.h"

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
```

### 3. To be is a to be the value of a variable
**Mandatory**

Write a function `print_all` that prints anything.

**Prototype:**
```c
void print_all(const char * const format, ...);
```

**Example:**
```c
#include "variadic_functions.h"

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
```

### Compilation and Examples
```bash
# Compilation
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d

# Execution
./a
./b
./c
./d
```
