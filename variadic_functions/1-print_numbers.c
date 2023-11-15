#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: ints variable to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list int_list;
	unsigned int i;

	va_start(int_list, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%d", va_arg(int_list, int));
	}
	printf("\n");
}
