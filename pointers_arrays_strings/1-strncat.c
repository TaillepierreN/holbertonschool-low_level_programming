#include "main.h"

/**
 * _strncat - concatenate two string up to n
 * @dest: string to concatenate to
 * @src: string to append
 * @n: number of byte to take and append
 * Return: result (string concatenated)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
