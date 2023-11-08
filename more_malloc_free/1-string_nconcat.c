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
	unsigned int i, j, length;
	char *newstring;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	length = strlen(s1) + n;
	newstring = malloc((length + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; i < length && s1[i] != '\0'; i++)
		newstring[i] = s1[i];
	for (j = 0; i < length && s2[j] != '\0'; i++, j++)
		newstring[i] = s2[j];

	newstring[i] = '\0';
	return (newstring);
}
