# C - Search Algorithms

## Table of Contents
1. [Introduction](#introduction)
2. [Learning Objectives](#learning-objectives)
3. [Requirements](#requirements)
4. [Tasks](#tasks)
5. [Author](#author)

## Introduction
This project, supervised by Wilfried Hennuyer, is part of the curriculum of Holberton School's low level programming track. It focuses on the implementation and understanding of various search algorithms in C.

## Learning Objectives
By the end of this project, you should be able to explain, without the help of Google:

- What is a search algorithm
- What is a linear search
- What is a binary search
- The best search algorithm to use depending on your needs

## Requirements
- **Environment**: Ubuntu 20.04 LTS
- **Compiler**: gcc with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style**: All code should use the Betty style and be checked with betty-style.pl and betty-doc.pl
- **Restrictions**:
    - No use of global variables
    - No more than 5 functions per file
    - Only the `printf` function is allowed from the standard library

**Additional**:
- All files must end with a new line
- A `README.md` file at the root of the folder is mandatory
- All your header files should be include guarded
- The prototypes of all your functions should be included in your header file called `search_algos.h`

## Tasks

### 0. Linear Search
- **File**: `0-linear.c`
- **Prototype**: `int linear_search(int *array, size_t size, int value);`

### 1. Binary Search
- **File**: `1-binary.c`
- **Prototype**: `int binary_search(int *array, size_t size, int value);`

### 2. Big O #0
- **File**: `2-O`
- Answer the question: What is the time complexity (worst case) of a linear search in an array of size n?

### 3. Big O #1
- **File**: `3-O`
- Answer the question: What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### 4. Big O #2
- **File**: `4-O`
- Answer the question: What is the time complexity (worst case) of a binary search in an array of size n?

### 5. Big O #3
- **File**: `5-O`
- Answer the question: What is the space complexity (worst case) of a binary search in an array of size n?

### 6. Big O #4
- **File**: `6-O`
- Analyze the space complexity of the following function:

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
## Author
Nicolas Taillepierre