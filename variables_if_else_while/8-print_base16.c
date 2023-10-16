#include <stdio.h>

/**
 * main - print numbers of base16
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nbr;
	char ltr;

	for (nbr = 0; nbr < 10; nbr++)
		putchar('0' + nbr);
	for (ltr = 'a'; ltr <= 'f'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}
