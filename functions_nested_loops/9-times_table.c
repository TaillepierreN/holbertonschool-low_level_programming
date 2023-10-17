#include "main.h"

/**
 * times_table - print 9 time table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k >= 10)
			{
				a = k / 10;
				b = k % 10;
				_putchar(a + '0');
				_putchar(b + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
