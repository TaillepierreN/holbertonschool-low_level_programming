#include "main.h"

/**
  * print_alphabet_x10 - print alphabet x10
  *
  * Return: 0 success
  */
int print_alphabet_x10(void)
{
	int i;
	char ltr;

	for (i = 0; i < 10; i++)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);
		_putchar('\n');
	}
	return (0);
}
