#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to look into
 * @needle: string to look for
 * Return: pointer to the begining of the needle or null
 */

char *_strstr(char *haystack, char *needle)
{

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if(needle[0] == '\0')
			return (&haystack[i]);

		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
