#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: array to print
 * @n: number of element to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n > i)
	{

		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	putchar('\n');
}
