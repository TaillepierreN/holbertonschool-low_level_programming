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
		for ( i = 1; i <= size; i++)
		{
			y = size - i;
			while (y > 0)
			{
				_putchar(' ');
				y--;			
			}
			for (l = 0 ; l < i; l++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
