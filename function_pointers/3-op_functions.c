#include "3-calc.h"

/**
 * op_add - add two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplie two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo two int
 * @a: first int
 * @b: second int
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
