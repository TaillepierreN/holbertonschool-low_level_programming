#include "main.h"

/**
  * print_alphabet - print the alphabet
  *
  * Return: void (success)
  */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);
	_putchar('\n');
	return;
}
