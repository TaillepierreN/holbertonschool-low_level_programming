#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j, num[2], result = 0, nbr = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		nbr = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				nbr = nbr * 10;
				nbr = nbr + (argv[i][j] - 48);
			}
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
		num[i - 1] = nbr;
	}
	result = num[0] * num[1];
	printf("%d\n", result);
	return (0);
}
