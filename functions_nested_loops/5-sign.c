#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: number to print the sign of
 *
 * Return: 1 if greater than 0, 0 if 0, -1 if lower than 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

