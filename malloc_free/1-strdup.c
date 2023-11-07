#include "main.h"
#include <string.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contain a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *string;
	int strlength, i;

	if (str == NULL)
		return (NULL);

	strlength = strlen(str);
	string = malloc(strlength * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < strlength; i++)
		string[i] = str[i];

	return (string);
}
