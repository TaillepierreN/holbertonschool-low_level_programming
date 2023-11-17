#include "variadic_functions.h"


void print_char(va_list data_list)
{
	printf("%c", va_arg(data_list, int));
}

void print_int(va_list data_list)
{
	printf("%d", va_arg(data_list, int));
}

void print_float(va_list data_list)
{
	printf("%f", va_arg(data_list, double));
}

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

void print_all(const char * const format, ...)
{
	datatype_list datatypes[] =
	{
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0, j = 0;
	va_list data_list;

	va_start(data_list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (datatypes[j].charac != '\0')
		{
			if (format[i] == datatypes[j].charac)
				datatypes[j].func(data_list);
			j++;
		}
		i++;
	}
}
