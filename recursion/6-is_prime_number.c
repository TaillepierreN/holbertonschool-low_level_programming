#include "main.h"

/**
 * is_prime_number - check is int is prime number
 * @n: int to check
 * Return: 1 if prime number, else 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 0)
		return (0);
	i = n / 2;
	return (check_if_prime(n, i));
}

/**
 * check_if_prime - check if int is prime number
 * @n: int to check
 * @i: int to check with
 * Return: 1 if prime, else 0
 */

int check_if_prime(int n, int i)
{
	if (i == 0 || n == 0)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i -= 1;
		return (check_if_prime(n, i));
	}

}
