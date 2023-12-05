# Bit Manipulation in C

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

## Tasks

### 0. 0

Write a function that converts a binary number to an unsigned int.

```c
unsigned int binary_to_uint(const char *b);
```

- `b`: A pointer to a string of 0 and 1 chars.
- Returns: The converted number, or 0 if there is one or more chars in the string `b` that is not 0 or 1 or if `b` is NULL.

Example:

```c
binary_to_uint("1");                             /* Output: 1 */
binary_to_uint("101");                           /* Output: 5 */
binary_to_uint("1e01");                          /* Output: 0 */
binary_to_uint("1100010");                       /* Output: 98 */
binary_to_uint("0000000000000000000110010010");  /* Output: 402 */
```

### 1. 1

Write a function that prints the binary representation of a number.

```c
void print_binary(unsigned long int n);
```

- `n`: The number to be converted and printed.
- Format: See example.
- You are not allowed to use arrays.
- You are not allowed to use malloc.
- You are not allowed to use the % or / operators.

Example:

```c
print_binary(0);                   /* Output: 0 */
print_binary(1);                   /* Output: 1 */
print_binary(98);                  /* Output: 1100010 */
print_binary(1024);                /* Output: 10000000000 */
print_binary((1 << 10) + 1);       /* Output: 10000000001 */
```

### 2. 10

Write a function that returns the value of a bit at a given index.

```c
int get_bit(unsigned long int n, unsigned int index);
```

- `n`: The number.
- `index`: The index, starting from 0, of the bit you want to get.
- Returns: The value of the bit at index `index` or -1 if an error occurred.

Example:

```c
get_bit(1024, 10);      /* Output: 1 */
get_bit(98, 1);         /* Output: 1 */
get_bit(1024, 0);        /* Output: 0 */
```

### 3. 11

Write a function that sets the value of a bit to 1 at a given index.

```c
int set_bit(unsigned long int *n, unsigned int index);
```

- `n`: The number.
- `index`: The index, starting from 0, of the bit you want to set.
- Returns: 1 if it worked, or -1 if an error occurred.

Example:

```c
unsigned long int n;

n = 1024;
set_bit(&n, 5);         /* Output: 1056 */
n = 0;
set_bit(&n, 10);        /* Output: 1024 */
n = 98;
set_bit(&n, 0);         /* Output: 99 */
```

### 4. 100

Write a function that sets the value of a bit to 0 at a given index.

```c
int clear_bit(unsigned long int *n, unsigned int index);
```

- `n`: The number.
- `index`: The index, starting from 0, of the bit you want to set.
- Returns: 1 if it worked, or -1 if an error occurred.

Example:

```c
unsigned long int n;

n = 1024;
clear_bit(&n, 10);      /* Output: 0 */
n = 0;
clear_bit(&n, 10);      /* Output: 0 */
n = 98;
clear_bit(&n, 1);       /* Output: 96 */
```

### 5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

- `n`, `m`: The numbers.
- Returns: The number of bits you would need to flip.

Example:

```c
flip_bits(1024, 1);      /* Output: 2 */
flip_bits(402, 98);      /* Output: 5 */
flip_bits(1024, 3);       /* Output: 3 */
flip_bits(1024, 1025);    /* Output: 1 */
```