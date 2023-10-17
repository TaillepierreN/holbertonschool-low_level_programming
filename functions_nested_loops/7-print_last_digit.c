#include "main.h"

/**
 * print_last_digit - print the last digit of int
 * @n: int to use
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
