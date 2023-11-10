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
	unsigned int i, j, firstlength, secondlength;
	char *newstring;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	firstlength = strlen(s1);
	secondlength = strlen(s2);

	newstring = malloc(sizeof(char) * (firstlength + secondlength + 1));
	if (newstring == NULL)
		return (NULL);

	for (i = 0; i < firstlength; i++)
		newstring[i] = s1[i];
	for (j = 0; j < secondlength; i++, j++)
		newstring[i] = s2[j];
	newstring[i] = '\0';
	return (newstring);
}
