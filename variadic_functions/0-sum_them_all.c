#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of int to be summed
 * @...: ints to be summed
 * Return: sum of all the int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(int_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(int_list, int);
	va_end(int_list);
	return (sum);
}
