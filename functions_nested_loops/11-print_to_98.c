#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: index
 * Return: void
 */

void print_to_98(int n)
{
	int i, j;

	i = 98;
	if (n > i)
	{
		for (j = n ; j > i; j--)
		{
			printf("%d, ", j);
		}
	}
	else if (n < i)
	{
		for (j = n ; j < i; j++)
		{
			printf("%d, ", j);
		}
	}
	printf("%d\n", i);
}
