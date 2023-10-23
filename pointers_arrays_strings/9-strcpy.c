#include "main.h"

/**
 * _strcpy - copies the string pointed by src to buffer dest
 * @dest: destination of the copy
 * @src: source of the copy
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
