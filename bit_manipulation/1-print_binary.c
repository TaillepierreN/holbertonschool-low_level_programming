#include "main.h"

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

void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n / 2);
		_putchar('0' + (n % 2));
	}
}
