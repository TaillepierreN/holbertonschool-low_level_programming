#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to count the number of bytes in the initial segment of
 * @accept: bytes to check if they are in the string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0, count = 0;
	unsigned int result;
	char enders[] = {',', ';', ' ', '\n', '\0'};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == enders[j])
			{
				result = count;
				return (result);
			}
			j++;
		}
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[i])
				count++;
			k++;
		}
		i++;

	}
	result = count;
	return (result);
}
