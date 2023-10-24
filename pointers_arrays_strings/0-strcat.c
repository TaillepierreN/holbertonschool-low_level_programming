#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to concatenate to
 * @src: string to append to dest
 * Return: result (string concatenated)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
