#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to search in
 * @c: char to look for
 * Return: pointer to the first occurrence of the char or null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
	i++;
	}
	return (NULL);
}
