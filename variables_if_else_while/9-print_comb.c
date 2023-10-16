#include <stdio.h>

/**
 * main - print all single digit combination
 *
 * Return: 0 (success)
 */

int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
	{
		putchar('0' + nbr);
		if (nbr != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
