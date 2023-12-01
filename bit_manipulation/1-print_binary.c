#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to print in binary
*/
void print_binary(unsigned long n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_binary_rec(n);
	}
}
/**
 * print_binary_rec - recursively iterates through n to print in binary
 * @n: number to print in binary
*/
void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);
		_putchar('0' + (n & 1));
	}
}
