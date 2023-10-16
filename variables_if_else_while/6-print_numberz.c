#include <stdio.h>

/**
 * main - print 0 through 9
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
		putchar('0' + nbr);
	putchar('\n');
	return (0);
}
