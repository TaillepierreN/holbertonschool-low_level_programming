#include <stdio.h>
#include <limits.h>

/**
 * print_last_digit - print the last digit of int
 * @n: int to use
 *
 * Return: last digit
 */

int main(void)
{
	int n, i;
	i = INT_MIN;
        n = -(i % 10);
        putchar('0' + i);
	putchar('0' + n);
        return (n);
}

