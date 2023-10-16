#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random number
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	return (0);
}
