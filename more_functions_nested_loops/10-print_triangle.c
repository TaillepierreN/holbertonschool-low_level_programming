#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, y, l;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (y = size; y > i; y--)
				_putchar(' ');
			for (l = i; l > 0; l--)
				_putchar('#');
			if (i != size)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
