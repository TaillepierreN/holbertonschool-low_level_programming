#include "main.h"
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change for an amount of €
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	for (i = 0; amount > 0; i++)
	{
		if ((amount - 25) >= 0)
			amount -= 25;
		else if ((amount - 10) >= 0)
			amount -= 10;
		else if ((amount - 5) >= 0)
			amount -= 5;
		else if ((amount - 2) >= 0)
			amount -= 2;
		else if ((amount - 1) >= 0)
			amount -= 1;
	}
	printf("%d\n", i);
	return (0);
}

