# Recursion

## General

### What is recursion?
Recursion is a programming concept where a function calls itself directly or indirectly to solve a problem. In simpler terms, a recursive function is a function that performs a task in part and delegates the remaining task to itself. This process continues until a base condition is met, at which point the function returns and the results are combined to solve the original problem.

### How to implement recursion
To implement recursion, follow these steps:

1. **Identify the base case:** Determine the simplest scenario where the function can directly return a result without making any further recursive calls.

2. **Define the recursive case:** Express the problem in terms of a smaller instance of the same problem. This is where the function calls itself with a modified input.

3. **Ensure progress towards the base case:** Make sure that each recursive call brings you closer to the base case. Otherwise, you risk entering into an infinite loop.

### In what situations you should implement recursion
Recursion is suitable for problems that can be broken down into smaller, similar sub-problems. It is often used when the problem follows a divide-and-conquer approach, and solving smaller instances of the problem contributes to solving the overall problem. Examples include tree traversal, searching, and sorting algorithms.

### In what situations you shouldn’t implement recursion
Recursion may not be the best choice when dealing with problems that require a large number of recursive calls, as this can lead to a stack overflow. Additionally, problems that can be more efficiently solved using iterative methods may not benefit from recursion.

## Tasks

### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
```c
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s);
```

This function prints a string recursively.

### 1. Why is it so important to dream? Because, in my dreams we are together
```c
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s);
```

This function prints a string in reverse recursively.

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
```c
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s);
```

This function returns the length of a string recursively.

### 3. You mustn't be afraid to dream a little bigger, darling
```c
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n);
```

This function returns the factorial of a given number recursively.

### 4. Once an idea has taken hold of the brain, it's almost impossible to eradicate
```c
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y);
```

This function returns the value of x raised to the power of y recursively.

### 5. Your subconscious is looking for the dreamer
```c
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n);
```

This function returns the natural square root of a number recursively.

### 6. Inception. Is it possible?
```c
/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n);
```

This function checks if a given number is a prime number recursively.

### 7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
```c
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s);
```

This function checks if a string is a palindrome recursively.

### 8. Inception. Now, before you bother telling me it's impossible...
```c
/**
 * wildcmp - Compares two strings with possible wildcard '*'.
 * @s1: The first string.
 * @s2: The second string, which can contain '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2);
```

This function compares two strings considering the possibility of a wildcard '*' in the second string recursively.