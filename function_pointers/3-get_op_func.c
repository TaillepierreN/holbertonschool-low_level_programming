#include "3-calc.h"

/**
 * get_op_func - check the operator passed in argument and
 * return the right function associated with it
 * @s: operator to check
 * Return: function associated with the operator, NULL if not an
 * operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

