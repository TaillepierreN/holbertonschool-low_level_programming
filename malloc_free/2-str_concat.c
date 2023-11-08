#include "main.h"
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string to use
 * @s2: second string to use
 * Return: string concateneted
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, firstlength, secondlength, sumlength;
	char *newstring;

	firstlength = (int)strlen(s1);
	secondlength = (int)strlen(s2);
	sumlength = firstlength + secondlength;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	newstring = malloc(sizeof(char) * (sumlength + 1));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		newstring[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		newstring[i] = s2[j];
		i++;
	}
	return (newstring);
}
