#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument value
 * Return: string concatenated
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, totallength = 0, k = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			totallength++;
			j++;
		}
		i++;
	}
	totallength = totallength + 1 + ac;
	string = malloc(totallength * sizeof(char));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			string[k] = av[i][j];
			j++;
			k++;
		}
		string[k] = '\n';
		k++;
		i++;
	}
	return (string);
}
