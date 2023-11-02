#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>

int _putchar(char c);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

int _strlen_recursion(char *s);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int _sqrt_recursion_with_guess(int n, int guess);

int is_prime_number(int n);

int check_if_prime(int n, int i);

int is_palindrome(char *s);

void check_palindrome(char *s, int length, int middle, int i, int *value);

#endif
