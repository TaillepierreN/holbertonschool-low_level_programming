#include "main.h"

/**
 * cap_string - capitalize all words of a strings
 * @str: string to capitalize
 * Return: string capitalized
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = {',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', ' ', '\n', '\t'};

	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	i++;
	}
	return (str);
}
