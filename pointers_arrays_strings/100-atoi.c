#include "main.h"

/**
 * _atoi - convert a string into an int
 * @s: string to convert
 * Return: int from the string
 */

int _atoi(char *s)
{
	int result = 0, i = 0, posneg = 1;
	unsigned int nbr = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			posneg = posneg * -1;

		if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (s[i] - 48);
		i++;
	}
	if (posneg == 1)
		result = nbr;
	else
		result = -nbr;
	return (result);
}
