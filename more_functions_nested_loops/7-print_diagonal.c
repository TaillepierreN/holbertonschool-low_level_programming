#include "main.h"

/**
 * print_diagonal - print n time \
 *
 * @n: number of prints
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, y;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (y = 0; y < i; y++)

				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
