#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of byte of s2 to add to s1
 * Return: string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *newstring;

	newstring = malloc(((strlen(s1) + strlen(s2) + 1) * sizeof(char)));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[0] == 0)
			newstring[0] = '\0';
		newstring[i] = s1[i];
	}
	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
		{
			if (s2[0] == 0)
				newstring[i] = '\0';
			newstring[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			if (s2[0] == 0)
				newstring[i] = '\0';
			newstring[i] = s2[j];
			i++;
		}

	}
	newstring[i] = '\0';
	return (newstring);
}
