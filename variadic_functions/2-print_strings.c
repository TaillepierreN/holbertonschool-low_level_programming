#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *nil = "(nil)", *temp;

	va_start(str_list, n);

	if (separator == NULL || n < 1)
		return;
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", separator);
		temp = va_arg(str_list, char *);
		printf("%s", (temp ? temp : nil));
	}
	printf("\n");
}
