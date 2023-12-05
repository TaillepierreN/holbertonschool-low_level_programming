# Project: malloc, free

## Learning Objectives

### General
- **Difference between automatic and dynamic allocation**
  - Understand the distinction between automatic (stack) and dynamic (heap) memory allocation.

- **Malloc and free and how to use them**
  - Learn about `malloc`, a function in C used for dynamic memory allocation, and `free`, a function used for freeing allocated memory.

- **Why and when use malloc**
  - Understand the scenarios where dynamic memory allocation is necessary and when to use `malloc` to allocate memory on the heap.

- **How to use valgrind to check for memory leaks**
  - Learn to use Valgrind, a tool for detecting memory leaks, to ensure proper memory management.

## Tasks

### 0. Float like a butterfly, sting like a bee
- **Write a function that creates an array of chars**
  - Prototype: `char *create_array(unsigned int size, char c);`
  - Returns `NULL` if `size = 0`.
  - Returns a pointer to the array, or `NULL` if it fails.

### 1. The woman who has no imagination has no wings
- **Write a function that returns a pointer to a newly allocated space in memory**
  - Prototype: `char *_strdup(char *str);`
  - Returns `NULL` if `str = NULL`.
  - On success, returns a pointer to the duplicated string.

### 2. He who is not courageous enough to take risks will accomplish nothing in life
- **Write a function that concatenates two strings**
  - Prototype: `char *str_concat(char *s1, char *s2);`
  - Returns `NULL` on failure.
  - Returns a pointer to a newly allocated space containing `s1` followed by `s2`, and null-terminated.

### 3. If you even dream of beating me, you'd better wake up and apologize
- **Write a function that returns a pointer to a 2-dimensional array of integers**
  - Prototype: `int **alloc_grid(int width, int height);`
  - Each element of the grid should be initialized to 0.
  - Returns `NULL` on failure.
  - If `width` or `height` is 0 or negative, returns `NULL`.

### 4. It's not bragging if you can back it up
- **Write a function that frees a 2-dimensional grid previously created by your `alloc_grid` function**
  - Prototype: `void free_grid(int **grid, int height);`

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
- **Write a function that concatenates all the arguments of your program**
  - Prototype: `char *argstostr(int ac, char **av);`
  - Returns `NULL` if `ac == 0` or `av == NULL`.
  - Returns a pointer to a new string, where each argument is followed by a newline.

## Repository Structure

- **GitHub Repository:** holbertonschool-low_level_programming
- **Directory:** malloc_free
- **Files:**
  - 0-create_array.c
  - 1-strdup.c
  - 2-str_concat.c
  - 3-alloc_grid.c
  - 4-free_grid.c
  - 100-argstostr.c