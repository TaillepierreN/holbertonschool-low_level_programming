#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to get the factorial of
 * Return: int factorial of n, -1 if n is negative
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
