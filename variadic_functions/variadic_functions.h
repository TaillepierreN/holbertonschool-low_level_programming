#ifndef VRDC_FCTN
#define VRDC_FCTN

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct datatypes
{
	char charac;
	void (*func)(va_list);
} datatype_list;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
