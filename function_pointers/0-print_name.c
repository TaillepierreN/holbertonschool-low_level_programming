#include "function_pointers.h"

/**
 * print_name - print a name the way it's passed in argument
 * @name: name to print
 * @f: function on how to print it
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
