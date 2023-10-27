#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search in
 * @accept: string to check
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, length;

	length = strlen(accept);
	while (s[i] != '\0')
	{
		for (j = 0; j < length; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
