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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	newstring = malloc(((strlen(s1) + strlen(s2) + 1) * sizeof(char)));
	
	if (newstring == NULL)
		return (NULL);
	
	for (i = 0; i < strlen(s1); i++)
	{
		newstring[i] = s1[i];
	}
	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
		{
			newstring[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			newstring[i] = s2[j];
			i++;
		}

	}
	newstring[i] = '\0';
	return (newstring);
}
