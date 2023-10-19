#include "main.h"

/**
 * print_line - print a single line of n length
 * @n: length of the line
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
