# C Functions and Nested Loops Project README

This repository contains C programs that implement various functions and nested loops as part of the "holbertonschool-low_level_programming" project. Each program is designed to fulfill specific requirements outlined in the project tasks.

## Task 0: isupper

**File:** `0-isupper.c`

**Objective:**
Write a function that checks if a character is an uppercase letter.

```c
int _isupper(int c);
```

- Returns 1 if `c` is an uppercase letter.
- Returns 0 otherwise.

**Example:**
```c
char c = 'A';
printf("%c: %d\n", c, _isupper(c)); // Output: A: 1
c = 'a';
printf("%c: %d\n", c, _isupper(c)); // Output: a: 0
```

## Task 1: isdigit

**File:** `1-isdigit.c`

**Objective:**
Write a function that checks if a character is a digit (0 through 9).

```c
int _isdigit(int c);
```

- Returns 1 if `c` is a digit.
- Returns 0 otherwise.

**Example:**
```c
char c = '0';
printf("%c: %d\n", c, _isdigit(c)); // Output: 0: 1
c = 'a';
printf("%c: %d\n", c, _isdigit(c)); // Output: a: 0
```

## Task 2: Collaboration is multiplication

**File:** `2-mul.c`

**Objective:**
Write a function that multiplies two integers.

```c
int mul(int a, int b);
```

**Example:**
```c
printf("%d\n", mul(98, 1024));   // Output: 100352
printf("%d\n", mul(-402, 4096)); // Output: -1646592
```

## Task 3: The numbers speak for themselves

**File:** `3-print_numbers.c`

**Objective:**
Write a function that prints the numbers from 0 to 9, followed by a new line.

```c
void print_numbers(void);
```

**Example:**
```c
print_numbers(); // Output: 0123456789
```

## Task 4: I believe in numbers and signs

**File:** `4-print_most_numbers.c`

**Objective:**
Write a function that prints the numbers from 0 to 9, excluding 2 and 4, followed by a new line.

```c
void print_most_numbers(void);
```

**Example:**
```c
print_most_numbers(); // Output: 01356789
```

## Task 5: Numbers constitute the only universal language

**File:** `5-more_numbers.c`

**Objective:**
Write a function that prints the numbers from 0 to 14 ten times, followed by a new line.

```c
void more_numbers(void);
```

**Example:**
```c
more_numbers();
/*
Output:
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
*/
```

## Task 6: The shortest distance between two points is a straight line

**File:** `6-print_line.c`

**Objective:**
Write a function that draws a straight line in the terminal.

```c
void print_line(int n);
```

**Example:**
```c
print_line(0);  // Output: (empty line)
print_line(2);  // Output: __
print_line(10); // Output: __________
print_line(-4); // Output: (empty line)
```

## Task 7: I feel like I am diagonally parked in a parallel universe

**File:** `7-print_diagonal.c`

**Objective:**
Write a function that draws a diagonal line on the terminal.

```c
void print_diagonal(int n);
```

**Example:**
```c
print_diagonal(0);  // Output: (empty line)
print_diagonal(2);  // Output: \n\
                   //         \n\
print_diagonal(10); // Output: \n\
                   //         \n \
                   //          \n  \
                   //           \n   \
                   //            \n    \
                   //             \n     \
                   //              \n      \
                   //               \n       \
                   //                \n         \
                   //                 \n
print_diagonal(-4); // Output: (empty line)
```

## Task 8: You are so much sunshine in every square inch

**File:** `8-print_square.c`

**Objective:**
Write a function that prints a square, followed by a new line.

```c
void print_square(int size);
```

**Example:**
```c
print_square(2);
/*
Output:
##
##
*/
print_square(10);
/*
Output:
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
*/
print_square(0);  // Output: (empty line)
```

## Task 9: Fizz-Buzz

**File:** `9-fizz_buzz.c`

**Objective:**
Write a program that prints the numbers from 1 to 100, replacing multiples of 3 with "Fizz," multiples of 5 with "Buzz," and multiples of both 3 and 5 with "FizzBuzz."

**Example:**
```c
./9-fizz_buzz
/*
Output:
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
*/
```

## Task 10: Triangles

**File:** `10-print_triangle.c`

**Objective:**
Write a function that prints a triangle, followed by a new line.

```c
void print_triangle(int size);
```

**Example:**
```c
print_triangle(2);
/*
Output:
 #
##
*/
print_triangle(10);
/*
Output:
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
*/
print_triangle(1);  // Output: #
print_triangle(0);  // Output: (empty line)
```

Feel free to explore each project's directory for the corresponding source code and additional files. Happy coding!