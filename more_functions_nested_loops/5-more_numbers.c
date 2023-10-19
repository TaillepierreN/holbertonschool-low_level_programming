#include "main.h"

/**
 * more_numbers - print 10x 0 through 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				k = j / 10;
				l = j % 10;
				_putchar('0' + k);
			}
			else
				l = j;
			_putchar('0' + l);
		}
		_putchar('\n');
	}
}
