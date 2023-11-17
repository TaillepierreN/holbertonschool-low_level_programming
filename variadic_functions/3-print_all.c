#include "variadic_functions.h"

/**
 * print_char - print characters
 * @data_list: list of char arguments to print
 */

void print_char(va_list data_list)
{
	printf("%c", va_arg(data_list, int));
}

/**
 * print_int - print integers
 * @data_list: list of int arguments to print
 */
void print_int(va_list data_list)
{
	printf("%d", va_arg(data_list, int));
}

/**
 * print_float - print floats
 * @data_list: list of float arguments to print
 */
void print_float(va_list data_list)
{
	printf("%f", va_arg(data_list, double));
}

/**
 * print_string - print strings
 * @data_list: list of strings arguments to print
 */
void print_string(va_list data_list)
{
	char *string;

	string = va_arg(data_list, char *);
	if (!string)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - print arguments passed to the function
 * @format: chars determining the type of argument to print
 * @...: arguments to print
 */
void print_all(const char * const format, ...)
{
	datatype_list datatypes[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0, j = 0;
	va_list data_list;
	char *separator = "";

	va_start(data_list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (datatypes[j].charac != '\0')
		{
			if (format[i] == datatypes[j].charac)
			{
				printf("%s", separator);
				datatypes[j].func(data_list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(data_list);
	printf("\n");
}
