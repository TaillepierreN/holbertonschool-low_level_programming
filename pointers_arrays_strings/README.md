# Holberton School Low-Level Programming

This repository contains solutions for the Holberton School Low-Level Programming tasks in the `pointers_arrays_strings` directory. Each task focuses on different aspects of working with pointers, arrays, and strings in the C programming language.

## Task 0: 98 Battery st.

**Objective:** Write a function `reset_to_98` that takes a pointer to an int as a parameter and updates the value it points to 98.

### Files:
- `0-reset_to_98.c`: Contains the implementation of the `reset_to_98` function.
- `0-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
$ ./0-98
```

## Task 1: Don't swap horses in crossing a stream

**Objective:** Write a function `swap_int` that swaps the values of two integers.

### Files:
- `1-swap.c`: Contains the implementation of the `swap_int` function.
- `1-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
$ ./1-swap
```

## Task 2: This report, by its very length, defends itself against the risk of being read

**Objective:** Write a function ` _strlen` that returns the length of a string.

### Files:
- `2-strlen.c`: Contains the implementation of the `_strlen` function.
- `2-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
$ ./2-strlen
```

## Task 3: I do not fear computers. I fear the lack of them

**Objective:** Write a function `_puts` that prints a string, followed by a new line.

### Files:
- `3-puts.c`: Contains the implementation of the `_puts` function.
- `3-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
$ ./3-puts
```

## Task 4: I can only go one way. I've not got a reverse gear

**Objective:** Write a function `print_rev` that prints a string in reverse, followed by a new line.

### Files:
- `4-print_rev.c`: Contains the implementation of the `print_rev` function.
- `4-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
$ ./4-print_rev
```

## Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

**Objective:** Write a function `rev_string` that reverses a string.

### Files:
- `5-rev_string.c`: Contains the implementation of the `rev_string` function.
- `5-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
$ ./5-rev_string
```

## Task 6: Half the lies they tell about me aren't true

**Objective:** Write a function `puts2` that prints every other character of a string, starting with the first character, followed by a new line.

### Files:
- `6-puts2.c`: Contains the implementation of the `puts2` function.
- `6-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
$ ./6-puts2
```

## Task 7: Winning is only half of it. Having fun is the other half

**Objective:** Write a function `puts_half` that prints half of a string, followed by a new line.

### Files:
- `7-puts_half.c`: Contains the implementation of the `puts_half` function.
- `7-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
$ ./7-puts_half
```

## Task 8: Arrays are not pointers

**Objective:** Write a function `print_array` that prints n elements of an array of integers, followed by a new line.

### Files:
- `8-print_array.c`: Contains the implementation of the `print_array` function.
- `8-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
$ ./8-print_array
```

## Task 9: strcpy

**Objective:** Write a function `_strcpy` that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

### Files:
- `9-strcpy.c`: Contains the implementation of the `_strcpy` function.
- `9-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
$ ./9-strcpy
```

## Task 10: Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

**Objective:** Write a function `_atoi` that converts a string to an integer.

### Files:
- `100-atoi.c`: Contains the implementation of the `_atoi` function.
- `100-main.c`: Test program to verify the correctness of the function.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
$ ./100-atoi
```

**Note:** The repository name, directory structure, and filenames adhere to the Holberton School requirements. Each task has its own directory containing the necessary files for compilation and testing.

# Project Title: Pointers, Arrays, and Strings

This project includes various C functions that manipulate strings and arrays using pointers. Each task has its own C file and a corresponding main file for testing.

## Tasks:

### 0. strcat
* Function: `char *_strcat(char *dest, char *src);`
* Concatenates two strings.
* Overwrites the null byte at the end of `dest` with the first character of `src`, and then adds a null byte at the end.
* Returns a pointer to the resulting string `dest`.

### 1. strncat
* Function: `char *_strncat(char *dest, char *src, int n);`
* Concatenates two strings, using at most `n` bytes from `src`.
* If `src` contains `n` or more bytes, it does not need to be null-terminated.
* Returns a pointer to the resulting string `dest`.

### 2. strncpy
* Function: `char *_strncpy(char *dest, char *src, int n);`
* Copies a string, using at most `n` bytes from `src`.
* If `src` contains fewer than `n` bytes, the remaining characters in `dest` are filled with null bytes.
* Returns a pointer to the resulting string `dest`.

### 3. strcmp
* Function: `int _strcmp(char *s1, char *s2);`
* Compares two strings.
* Returns an integer less than, equal to, or greater than zero if `s1` is found, respectively, to be less than, to match, or be greater than `s2`.

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
* Function: `void reverse_array(int *a, int n);`
* Reverses the content of an array of integers.

### 5. Always look up
* Function: `char *string_toupper(char *);`
* Changes all lowercase letters of a string to uppercase.

### 6. Expect the best. Prepare for the worst. Capitalize on what comes
* Function: `char *cap_string(char *);`
* Capitalizes all words of a string.
* Words are separated by space, tabulation, newline, comma, semicolon, period, exclamation mark, question mark, double quote, `(`, `)`, `{`, and `}`.

### 7. Mozart composed his music not for the elite, but for everybody
* Function: `char *leet(char *);`
* Encodes a string into 1337.
* Replaces certain letters with numbers: `a/A` with `4`, `e/E` with `3`, `o/O` with `0`, `t/T` with `7`, and `l/L` with `1`.

## How to Use:
1. Clone the repository: `git clone <repository-url>`
2. Compile the C files with the provided main files. For example:
   ```bash
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
   ./0-strcat
   ```
3. Repeat the process for other tasks, replacing the file names accordingly.

Feel free to explore and test each function using the provided main files.

# Project Title: C Programming - Advanced Pointers, Arrays, and Strings

This project delves into advanced C programming concepts, focusing on pointers, arrays, and strings. The tasks aim to enhance your understanding of multidimensional arrays, pointer manipulation, and common C standard library functions for string handling.

## Learning Objectives:

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## Tasks:

### Task 0: memset
Write a function that fills memory with a constant byte.

- **Prototype:** `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte b.
- Returns a pointer to the memory area s.

Example:
```c
#include "main.h"
#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    // Print buffer in hexa
    // ...
}

int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
```

### Task 1: memcpy
Write a function that copies memory area.

- **Prototype:** `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies n bytes from memory area src to memory area dest.
- Returns a pointer to dest.

Example:
```c
#include "main.h"
#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    // Print buffer in hexa
    // ...
}

int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
```

### Task 2: strchr
Write a function that locates a character in a string.

- **Prototype:** `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.

Example:
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
```

### Task 3: strspn
Write a function that gets the length of a prefix substring.

- **Prototype:** `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of s which consist only of bytes from accept.

Example:
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
```

### Task 4: strpbrk
Write a function that searches a string for any of a set of bytes.

- **Prototype:** `char *_strpbrk(char *s, char *accept);`
- The `_strpbrk()` function locates the first occurrence in the string s of any of the bytes in the string accept.
- Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.

Example:
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
```

### Task 5: strstr
Write a function that locates a substring.

- **Prototype:** `char *_strstr(char *haystack, char *needle);`
- The `_strstr()` function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared.
- Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

Example:
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
```

### Task 6: Chess is mental torture
Write a function that prints the chessboard.

- **Prototype:** `void print_chessboard(char (*a)[8]);`

Example:
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}
```

### Task 7: The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers.

- **Prototype:** `void print_diagsums(int *a, int size);`
- Format: see example

Example:
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521