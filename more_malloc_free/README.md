# Project: More malloc, free

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them

## Tasks

### 0. Trust no one
**Mandatory**
Write a function that allocates memory using malloc.

**Prototype:** `void *malloc_checked(unsigned int b);`

- Returns a pointer to the allocated memory.
- If malloc fails, the `malloc_checked` function should cause normal process termination with a status value of 98.

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
```

### 1. string_nconcat
**Mandatory**
Write a function that concatenates two strings.

**Prototype:** `char *string_nconcat(char *s1, char *s2, unsigned int n);`

- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null-terminated.
- If the function fails, it should return NULL.
- If `n` is greater or equal to the length of `s2`, then use the entire string `s2`.
- If `NULL` is passed, treat it as an empty string.

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
```

### 2. _calloc
**Mandatory**
Write a function that allocates memory for an array, using `malloc`.

**Prototype:** `void *_calloc(unsigned int nmemb, unsigned int size);`

- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero.
- If `nmemb` or `size` is 0, then `_calloc` returns NULL.
- If `malloc` fails, then `_calloc` returns NULL.

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
```

### 3. array_range
**Mandatory**
Write a function that creates an array of integers.

**Prototype:** `int *array_range(int min, int max);`

- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
- Return: the pointer to the newly created array.
- If `min > max`, return NULL.
- If `malloc` fails, return NULL.

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
```

### 4. _realloc
**Advanced**
Write a function that reallocates a memory block using `malloc` and `free`.

**Prototype:** `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`

- `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`.
- `old_size` is the size, in bytes, of the allocated space for `ptr`.
- `new_size` is the new size, in bytes, of the new memory block.
- The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes.
- If `new_size > old_size`, the “added” memory should not be initialized.
- If `new_size == old_size`, do not do anything and return `ptr`.
- If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`.
- If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.
- Don’t forget to free `ptr` when it makes sense.

**Example:**
```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
```

### 5. We must accept finite disappointment, but never lose infinite hope
**Advanced**
Write a program that multiplies two positive numbers.

**Usage:** `mul num1 num2`

- `num1` and `num2` will be passed in base 10.
- Print the result, followed by a new line.
- If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98.
- `num1` and `num2` should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98.
- You are allowed to use more than 5 functions in your file.
- You can use `bc` (`man bc`) to check your results.

**Example:**
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c _putchar.c -o 101-mul
./101-mul 10 98
# Output: 980
./101-mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 286580343650843650

83426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708
# Output: The result of the multiplication
```

## Repository Structure

- **GitHub Repository:** holbertonschool-low_level_programming
- **Directory:** more_malloc_free
- **Files:**
  - 0-malloc_checked.c
  - 1-string_nconcat.c
  - 2-calloc.c
  - 3-array_range.c
  - 100-realloc.c
  - 101-mul.c