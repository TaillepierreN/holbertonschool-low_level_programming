#include "main.h"

/**
 *  print_diagsums - print the sum of the two diagonals
 *  of a square matrix of integers.
 *  @a: adress of the square
 *  @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int i, j, firstdiag = 0, secondiag = 0;

	for (i = 0; i < size; i++)
	{
		firstdiag += a[(size + 1) * i];
	}

	for (j = 0; j < size; j++)
	{
		secondiag += a[(size - 1) * (j + 1)];
	}

	printf("%d, %d\n", firstdiag, secondiag);
}
