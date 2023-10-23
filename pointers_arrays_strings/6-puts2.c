#include "main.h"

/**
 * puts2 - print every other character in a string starting with the first
 * @str: string to pring
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
