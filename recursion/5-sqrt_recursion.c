#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to get the squareroot of
 * Return: int squareroot
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_with_guess(n, n / 2));
}

/**
 * _sqrt_recursion_with_guess - calculate the natural root of a number
 * @n: number to get the square root of
 * @guess: guess needed to check if it is the square root
 * Return: int square root
 */

int _sqrt_recursion_with_guess(int n, int guess)
{
	int new_guess;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	new_guess = (guess + n / guess) / 2;
	if (new_guess == guess || new_guess == guess + 1)
	{
		if (guess * guess == n)
			return (guess);
		else
			return (-1);
	}
		return (_sqrt_recursion_with_guess(n, new_guess));
