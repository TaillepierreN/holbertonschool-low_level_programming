#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i = 0, y;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		y = i / 2;
	}
	else
		y = (i - 1) / 2;
	while (y < i)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
