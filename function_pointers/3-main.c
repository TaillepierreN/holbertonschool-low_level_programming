#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value
 * Return: 0(sucess);
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*calculate)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	calculate = get_op_func(operator);

	if (((*operator == '/' || *operator == '%') && num2 == 0) || calculate == NULL)
	{
		printf("Error\n");
		if (calculate == NULL)
			exit(99);
		else
			exit (100);
	}

	result = calculate(num1, num2);
	printf("%d\n", result);
	return (0);
}
